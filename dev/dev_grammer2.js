const ID = /_?[a-zA-Z][a-zA-Z0-9_]*/;

const keywords = {
    compiled: "comp",
    py: "py",
    exec: "exec",
    disabled: "disabled",
    filetype: "filetype",
    local: "local",
    mem_gb: "mem_gb",
    vmem_gb: "vmem_gb",
    preflight: "preflight",
    retain: "retain",
    special: "special",
    split: "split",
    strict: "strict",
    struct: "struct",
    threads: "threads",
    using: "using",
    volatile: "volatile",
    self: "self",
    true: "true",
    false: "false",
    map: "map",
    call: "call",
    as: "as",
    src: "src",
    return: "return",
    stage: "stage",
    pipeline: "pipeline",
    in: "in",
    out: "out",
    int: "int",
    string: "string",
    path: "path",
    float: "float",
    bool: "bool",
    null: "null",
};

const INCLUDE_DIRECTIVE = "@include";

module.exports = grammar({
    name: "martian",

    extras: ($) => [/\s|\\\r?\n/, $.comment],

    word: ($) => $.identifier,

    conflicts: ($) => [[$.field_declaration]],

    rules: {

        source_file: ($) => repeat(
            $._include_statements,
            $._declaration_list,
            $.call_expression,
        ),

        _declaration_list: ($) => repeat1($._declaration),

        _declaration: ($) =>
            choice(
                $.filetype_declaration,
                $.stage_declaration,
                $.pipeline_declaration,
                $.struct_declaration
            ),

        // -----------------------------------------------------------------------
        // ==== Includes =========================================================
        // -----------------------------------------------------------------------
        // An include is something of the form:
        //      @include "path/to/file.mro"

        _include_statements: ($) => repeat1($.include_statement),

        include_statement: ($) => seq(INCLUDE_DIRECTIVE, field("include", $.string)),

        // -----------------------------------------------------------------------
        // ==== Structs ==========================================================
        // -----------------------------------------------------------------------
        // A 'struct' is something of the form:
        //      struct Point(
        //          float x,
        //          int[] y,
        //          int    d2   "foo",
        //          json  dest  "help" "dest.xml",
        //      )

        struct_declaration: ($) => seq(
            keywords.struct,
            field("name", $.identifier),
            "(",
            $.struct_parameter_list,
            ")",
        ),

        // -----------------------------------------------------------------------
        // ==== Pipeline =========================================================
        // -----------------------------------------------------------------------
        //      pipeline AWESOME(
        //          in  string     key1       "help text",
        //          in  string     value1,
        //          in  string     key2,
        //          in  string     value2,
        //          in  Pointalism struct_in,
        //          # Pipeline arguments get comments too.
        //          out json[]     outfile    "The json file containing all of the keys and values."  "all_keys",
        //          out Helpful    thing,
        //      )
        //      {
        //          # one or more call expressions
        //          call ADD_KEY1(
        //              key      = self.key1,
        //          ) using (
        //              local = true,
        //          )
        //      
        //          # The return statement
        //          return (
        //              outfile = MERGE_JSON.result,
        //              # Package the outputs into a struct.
        //              thing   = {
        //                  a:                             [true],
        //                  d2:                            1,
        //                  d3_is_a_file_with_a_long_name: "foo.bar",
        //                  ia:                            [1],
        //                  m:                             {},
        //              },
        //          )
        //          
        //          # Optional 'retain'
        //          retain (
        //              ADD_KEY1.result,
        //          )
        //      }

        pipeline_declaration: ($) => seq(
            keywords.pipeline,
            field("name", $.identifier),
            "(",
            $.parameter_list,
            ")",
            "{",
            repeat($.call_statement),
            $.return_statement,
            optional($.retain_statement),
            "}"
        ),

        return_statement: ($) => seq(
            keywords.return,
            "(",
            repeat($.binding_statement),
            ")",
        ),

        // -----------------------------------------------------------------------
        // ==== Stage ============================================================
        // -----------------------------------------------------------------------
        // A 'stage' is something of the form:
        //      stage STAGE_NAME(
        //          # Input parameters
        //          in string                    key,
        //          in int[]                     y,
        //          in  json                     start,
        //          in  string                   fail_file  "The file to \"check\" to force failure.",
        //          in  map<Point>               point,
        //          # Output parameters
        //          out json                     result    ""  "out name",
        //          out Point[]                  arr,
        //          out map<STRUCT_CONSUMER>     flat_map,
        //          # The source file.
        //          src py                       "stages/add_key",
        //          # or src exec     "stages/whatever arg",
        //          # or src comp    "bin/sum_squares mode_arg",
        //      ) split (
        //          in  float   value,
        //          out float   square,
        //      ) using (
        //          # This stage does almost nothing.
        //          mem_gb  = 0.05,
        //          # Perhaps it sleeps a while.
        //          threads = 0.01,
        //          # This stage uses 2TB of vmem.
        //          vmem_gb  = 1024,
        //          volatile = strict,
        //      )

        stage_declaration: ($) => seq(
            keywords.stage,
            field("name", $.identifier),
            "(",
            $.parameter_list,
            $.source_declaration,
            ")",
            optional($._stage_modifiers),
        ),

        source_declaration: ($) => seq(
            keywords.src,
            $.source_type,
            field("source_path", $.string),
        ),

        source_type: (_) => choice(
            keywords.py,
            keywords.comp,
            keywords.exec,
        ),

        _stage_modifiers: ($) => choice(
            $.split_statement,
            $.using_statement,
            $.retain_statement,

            seq($.split_statement, $.using_statement),
            seq($.split_statement, $.retain_statement),

            seq($.using_statement, $.split_statement),
            seq($.using_statement, $.retain_statement),

            seq($.retain_statement, $.split_statement),
            seq($.retain_statement, $.using_statement),

            seq($.split_statement, $.using_statement, $.retain_statement),
            seq($.split_statement, $.retain_statement, $.using_statement),

            seq($.using_statement, $.split_statement, $.retain_statement),
            seq($.using_statement, $.retain_statement, $.split_statement),
            seq($.retain_statement, $.split_statement, $.using_statement),
            seq($.retain_statement, $.using_statement, $.split_statement),
        ),

        // -----------------------------------------------------------------------
        // ==== Resource Statements ==============================================
        // -----------------------------------------------------------------------

        using_statement: ($) => seq(
            "using",
            "(",
            repeat($.using_binding),
            ")",
        ),

        using_binding: ($) => seq(
            field("resource", $._using_binding_resource),
            "=",
            field("value", choice($.scoped_identifier, $.identifier, $.constant)),
        ),

        _using_binding_resource: ($) => choice(
            keywords.mem_gb,
            keywords.vmem_gb,
            keywords.threads,
            keywords.volatile,
            keywords.local,
            keywords.disabled,
            keywords.preflight,
            keywords.special,
        ),

        split_statement: ($) => seq(
            keywords.split,
            "(",
            $.parameter_list,
            ")",
        ),

        retain_statement: ($) => seq(
            keywords.retain,
            "(",
            repeat1(field(seq($.scoped_identifier, $.identifier, ","))),
            ")",
        ),


        // -----------------------------------------------------------------------
        // ==== Stage and Pipeline Parameter Lists ===============================
        // -----------------------------------------------------------------------

        parameter_list: ($) => repeat(
            choice(
                $.input_parameter,
                $.output_parameter
            )
        ),

        input_parameter: ($) => seq(
            keywords.in,
            field("type", $.parameter_type),
            field("name", $.identifier),
            optional(field("help", $.string)),
            ","
        ),

        output_parameter: ($) => seq(
            keywords.out,
            field("type", $.parameter_type),
            field("name", $.identifier),
            // out string param "help text",
            optional(field("help", $.string)),
            // out string param "help text" "out name",
            optional(field("output_name", $.string)),
            ","
        ),

        parameter_type: ($) => choice(
            $.primitive_type,
            // map<int>, map<int[]>
            $.map_type,
            // int[], Point[], map<string>[], map<int[]>[], json[]
            $.array_type,
            // json, Point, ...
            $.identifier,
        ),

        primitive_type: (_) => choice(
            keywords.string,
            keywords.int,
            keywords.float,
            keywords.bool,
            keywords.path,
            keywords.file,
        ),

        map_type: ($) => choice(
            keywords.map,
            seq(keywords.map, "<", $.parameter_type, ">"),
        ),

        array_type: ($) => seq(
            $.parameter_type,
            // int[], int[][],
            seq("[", "]"),
        ),

        // -----------------------------------------------------------------------
        // ==== Call or Map Call =================================================
        // -----------------------------------------------------------------------
        // A 'stage' is something of the form:
        //      call MAP_PRODUCER(
        //          * = self,
        //      )
        //
        //      call ADD_KEY1(
        //          key      = self.key1,
        //          value    = self.value1,
        //          input = [
        //              "four",
        //              ADD_KEY3.result,
        //          ],
        //          foo1               = {
        //              "item": STRUCT_CONSUMER,
        //          },
        //          # Comments can go on arguments as well.
        //          failfile = "fail \n\"1\"",
        //          start    = null,
        //      ) using (
        //          local = true,
        //      )
        //
        //      call MAP_EXAMPLE(
        //          foo = {
        //              "bar": "baz",
        //              # Comments inside a map expression.
        //              "bing": null,
        //              "blarg": {
        //                  # Deeper inside comments.
        //                  "n": 2,
        //              },
        //          },
        //      ) using (
        //          # ADD_KEY3 can disable this stage.
        //          disabled = ADD_KEY3.disable_example,
        //          local    = true,
        //          # This shouldn't be volatile because reasons.
        //          volatile = false,
        //      )
        //
        //      # Calls the pipelines, splitting over two forks.
        //      map call AWESOME(
        //          key1      = "1",
        //          value1    = "one",
        //          key2      = "2",
        //          value2    = split [
        //              "two",
        //              "deux",
        //          ],
        //          struct_in = {
        //              dest: "foo.json",
        //              point: {
        //                  x: 1.5,
        //                  y: [
        //                      2,
        //                      3,
        //                  ],
        //              },
        //          },
        //      )

        call_statement: ($) => seq(
            // map call STAGE()
            optional(keywords.map),
            keywords.call,
            field("name", $.identifier),
            optional(
                // call STAGE as NAME()
                seq(
                    keywords.as,
                    field("alias", $.identifier),
                ),
            ),
            "(",
            $.call_parameter_list,
            ")",
            // using (
            //  preflight = true,
            // )
            optional($.using_statement),
        ),



        // -----------------------------------------------------------------------
        // ==== Bindings =========================================================
        // -----------------------------------------------------------------------

        binding: ($) => seq(
            field("target", $._binding_target),
            "=",
            optional(keywords.split),
            field("value", $._binding_value),
            ",",
        ),

        _binding_value: ($) => choice(
            keywords.null,
            $.identifier,
            $.scoped_identifier,
            $.array_binding,
            $.map_binding,
            $.constant,
        ),

        _binding_target: ($) => choice(
            "*",
            $.identifier,
        ),

        // -----------------------
        // ==== Array Binding ====
        // -----------------------

        array_binding: ($) => choice(
            seq("[", "]"),
            seq("[", $._binding_value, repeat(seq(",", $._binding_value)), optional(","), "]"),
        ),

        // ---------------------
        // ==== Map Binding ====
        // ---------------------

        map_binding: ($) => choice(
            seq("{", "}"),
            seq(
                "{",
                $._map_binding_inner,
                repeat(seq(",", $._map_binding_inner)),
                optional(","),
                "}"
            ),
        ),

        _map_binding_inner: ($) => seq(
            field("key", $.string),
            ":",
            field("value", $._binding_value),
        ),

        // ----------------------
        // ==== Path Binding ====
        // ----------------------

        // Something like self.value or STAGE.value.other_value
        scoped_identifier: ($) => seq(
            field("path", $._scoped_identifier_begin),
            repeat1($._scoped_identifier_member),
        ),

        _scoped_identifier_begin: ($) => choice(
            keywords.self,
            $.identifier
        ),

        _scoped_identifier_member: ($) => seq(
            ".",
            field("name", $.identifier),
        ),


        // -----------------------------------------------------------------------
        // ==== File Type Declaration ============================================
        // -----------------------------------------------------------------------
        // The file type declaration is something of the form:
        //      filetype json;

        filetype_declaration: ($) => seq(keywords.filetype, $._filetype_name, ";"),

        _filetype_name: ($) => /(?:[a-zA-z0-9_]+\.)*[a-zA-z0-9_]+/,

        // -----------------------------------------------------------------------
        // ==== Constants ========================================================
        // -----------------------------------------------------------------------

        constant: ($) => choice(
            $.string,
            $.number,
            keywords.true,
            keywords.false,
            keywords.null,
        ),

        // ----------------
        // ==== String ====
        // ----------------

        string: ($) => seq('"', $._string_inner, '"'),

        _string_inner: ($) => choice(
            $._string_inner_constant_character_escape_mro,
            $._string_inner_invalid_illegal_unknown_escape_mro,
            $._string_inner_quoted_double_character_mro,
        ),
        _string_inner_constant_character_escape_mro: ($) => /\\(?:[0-7]{3}|[abfnrtv\\\"]|x[0-9a-fA-F]{2}|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})/,
        _string_inner_invalid_illegal_unknown_escape_mro: ($) => /\\(?:[0-7]+[^0-7]|[xuU][0-9a-fA-F]*[^0-9a-fA-F]|.)/,
        _string_inner_quoted_double_character_mro: ($) => /[^\\\"]/,

        // ----------------
        // ==== Number ====
        // ----------------

        number: ($) => choice($._float, $_.integer),

        // _float: (_) => /\b-?[0-9]+(:?\.[0-9]+[eE][+-]?|[eE][+-]?|\.)[0-9]+\b/,
        _float: (_) => /-?[0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?/,

        _integer: (_) => /-?0*[0-9]{1,19}/,

        // -----------------------------------------------------------------------
        // ==== Comments =========================================================
        // -----------------------------------------------------------------------

        comment: (_) => token(seq("#", /.*/)),

        // -----------------------------------------------------------------------
        // ==== Identifier =======================================================
        // -----------------------------------------------------------------------

        identifier: (_) => ID,

    },
});



