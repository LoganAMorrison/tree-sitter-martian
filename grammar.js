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
  file: "file",
  default: "default",
};

const INCLUDE_DIRECTIVE = "@include";

module.exports = grammar({
  name: "martian",

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  word: ($) => $.identifier,

  conflicts: (_) => [],

  inline: $ => [

  ],

  rules: {

    source_file: ($) => repeat(
      choice(
        $.includes,
        $.filetype_declaration,
        $.stage_declaration,
        $.pipeline_declaration,
        $.struct_declaration,
        $.call_stm,
        $._val_exp,
      )
    ),



    // -----------------------------------------------------------------------
    // ==== Includes =========================================================
    // -----------------------------------------------------------------------
    // An include is something of the form:
    //      @include "path/to/file.mro"

    includes: ($) => seq(INCLUDE_DIRECTIVE, field("include", $.string)),

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
      field("body", optional($.struct_field_list)),
      ")",
    ),

    struct_field_list: ($) => repeat1(seq($.struct_field, ",")),

    struct_field: ($) => choice(
      $._typed_parameter,
      $._typed_parameter_help,
      $._typed_parameter_help_rename,
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
      field("parameters", $.parameter_list),
      ")",
      "{",
      repeat($.call_stm),
      $.return_stm,
      optional($.retain_list),
      "}"
    ),

    return_stm: ($) => seq(
      keywords.return,
      "(",
      optional($.binding_list),
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
      $.stage_body,
      ")",
      repeat(choice($.split_param_list, $.resources, $.retain_list)),
    ),

    stage_body: ($) => seq(
      $.parameter_list,
      $.src_stm,
    ),


    /**
     * A source declartion for Martian stages.
     *
     * Example:
     * ```martian
     * stage MY_STAGE(
     *  in int x,
     *  out int y,
     *  # Source declaration
     *  src py "path/to/source",
     * )
     * ```
     */
    src_stm: ($) => seq(
      keywords.src,
      field("type", $.src_lang),
      field("source_path", $.string),
      ",",
    ),

    src_lang: (_) => choice(
      keywords.py,
      keywords.compiled,
      keywords.exec,
    ),


    // -----------------------------------------------------------------------
    // ==== Resource Statements ==============================================
    // -----------------------------------------------------------------------

    resources: ($) => seq(
      "using",
      "(",
      optional($.resource_list),
      ")",
    ),

    resource_list: ($) => seq(
      $.resource_binding,
      repeat(seq(",", $.resource_binding)),
      optional(",")
    ),

    resource_binding: ($) => seq(
      field("resource", $.resource_type),
      "=",
      field("value", $.resource_value),
    ),

    resource_type: (_) => choice(
      keywords.mem_gb,
      keywords.vmem_gb,
      keywords.threads,
      keywords.volatile,
      keywords.local,
      keywords.disabled,
      keywords.preflight,
      keywords.special,
    ),

    resource_value: ($) => choice(
      $.ref_exp, $._constant
    ),

    split_param_list: ($) => seq(
      keywords.split,
      optional(keywords.using),
      "(",
      optional($.parameter_list),
      ")",
    ),

    // retain_list: ($) => seq(
    //   keywords.retain,
    //   "(",
    //   repeat(field("name", seq(choice($.scoped_identifier, $.identifier), ","))),
    //   ")",
    // ),

    retain_list: ($) => seq(
      keywords.retain,
      "(",
      repeat(field("name", seq($.ref_exp, ","))),
      ")",
    ),


    // -----------------------------------------------------------------------
    // ==== Stage and Pipeline Parameter Lists ===============================
    // -----------------------------------------------------------------------

    parameter_list: ($) => repeat1(
      seq(
        choice(
          $.in_param,
          $.out_param,
        ),
        ","
      )
    ),

    in_param: ($) => seq(
      keywords.in,
      choice(
        $._typed_parameter,
        $._typed_parameter_help,
      ),
    ),

    out_param: ($) => seq(
      keywords.out,
      choice(
        $._typed_default_parameter,
        $._typed_parameter,
        $._typed_parameter_help,
        $._typed_parameter_help_rename,
      ),
    ),

    _typed_default_parameter: ($) => seq(
      field("type", $.parameter_type),
    ),

    _typed_parameter: ($) => seq(
      field("type", $.parameter_type),
      field("name", $.identifier),
    ),

    _typed_parameter_help: ($) => seq(
      field("type", $.parameter_type),
      field("name", $.identifier),
      field("help", $.string),
    ),

    _typed_parameter_help_rename: ($) => seq(
      field("type", $.parameter_type),
      field("name", $.identifier),
      field("help", $.string),
      field("output_name", $.string),
    ),

    parameter_type: ($) => choice(
      $.primitive_type,
      // map<int>, map<int[]>
      $.map_type,
      // int[], Point[], map<string>[], map<int[]>[], json[]
      $.array_type,
      // json, Point, ...
      $.identifier,
      // filetype
      $.id_list,
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

    call_stm: ($) => seq(
      optional(keywords.map),
      keywords.call,
      optional($.modifiers),
      field("name", $.identifier),
      optional($.call_alias),
      "(",
      optional($.binding_list),
      ")",
      optional($.resources),
    ),

    call_alias: ($) => seq(
      keywords.as,
      field("alias", $.identifier)
    ),

    modifiers: (_) => repeat1(choice(
      keywords.local,
      keywords.preflight,
      keywords.volatile,
    )),

    // -----------------------------------------------------------------------
    // ==== Bindings =========================================================
    // -----------------------------------------------------------------------

    binding_list: ($) => seq(
      $.binding,
      repeat(seq(",", $.binding)),
      optional(",")
    ),

    binding: ($) => seq(
      field("target", $.binding_target),
      "=",
      optional(keywords.split),
      field("value", $.expression),
    ),

    expression: ($) => choice(
      $.ref_exp,
      $._val_exp,
    ),

    _val_exp: $ => choice(
      $.array_exp,
      $.map_exp,
      $._constant,
    ),

    binding_target: ($) => choice(
      "*",
      $.identifier,
    ),

    wildcard_bind: $ => seq(
      "*",
      "=",
      field("target", choice($.ref_exp, keywords.self)),
    ),

    // -----------------------
    // ==== Array Binding ====
    // -----------------------

    array_exp: ($) => seq(
      "[",
      sepBy(",", $.expression),
      optional(","),
      "]"
    ),

    // ---------------------
    // ==== Map Binding ====
    // ---------------------

    // Technically, we can only have: 
    //    seq("{", $.string, ":" $.exp, "}")
    // or
    //    seq("{", $.identifier, ":" $.exp, "}")
    // This rule is more relaxed.
    map_exp: ($) => seq(
      "{",
      sepBy(",", $.pair),
      optional(","),
      "}"
    ),

    pair: ($) => seq(
      field("key", choice($.string, $.identifier)),
      ":",
      field("value", $.expression),
    ),

    // ----------------------
    // ==== Path Binding ====
    // ----------------------

    id_list: ($) => seq($.identifier, repeat1(seq(".", $.identifier))),

    // Something like self.value or STAGE.value.other_value
    ref_exp: $ => choice(
      $.identifier,
      keywords.self,
      $.ref_list,
    ),

    ref_list: $ => choice(
      $.id_list,
      seq($.identifier, ".", keywords.default),
      seq(keywords.self, ".", $.identifier),
      seq(keywords.self, ".", $.id_list),
    ),



    // -----------------------------------------------------------------------
    // ==== File Type Declaration ============================================
    // -----------------------------------------------------------------------
    // The file type declaration is something of the form:
    //      filetype json;

    filetype_declaration: ($) => seq(
      keywords.filetype,
      field("filetype", choice($.identifier, $.id_list)),
      ";"
    ),

    filetype_name: (_) => /(?:[a-zA-z0-9_]+\.)*[a-zA-z0-9_]+/,

    // -----------------------------------------------------------------------
    // ==== Constants ========================================================
    // -----------------------------------------------------------------------

    _constant: ($) => choice(
      $.string,
      $._number,
      $.true,
      $.false,
      $.null,
    ),

    true: (_) => "true",
    false: (_) => "false",
    null: (_) => "null",

    // ----------------
    // ==== String ====
    // ----------------

    string: ($) => seq('"', $._string_inner, '"'),

    _string_inner: (_) => /((?:[^\\\"]|\\.)*)/,

    // _string_inner: ($) => choice(
    //   $._string_inner_constant_character_escape_mro,
    //   $._string_inner_invalid_illegal_unknown_escape_mro,
    //   $._string_inner_quoted_double_character_mro,
    // ),

    _character_escape: (_) => /\\(?:[0-7]{3}|[abfnrtv\\\"]|x[0-9a-fA-F]{2}|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})/,
    _unknown_escape: (_) => /\\(?:[0-7]+[^0-7]|[xuU][0-9a-fA-F]*[^0-9a-fA-F]|.)/,
    _quoted_double_character: (_) => /[^\\\"]/,

    // ----------------
    // ==== Number ====
    // ----------------

    _number: ($) => choice($.float, $.integer),

    float: (_) => /-?[0-9]+(\.[0-9]+[eE][+-]?|[eE][+-]?|\.)[0-9]+/,

    integer: (_) => /-?0*[0-9]{1,19}/,

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

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}

