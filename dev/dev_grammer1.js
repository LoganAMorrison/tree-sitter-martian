const ID = /_?[a-zA-Z][a-zA-Z0-9_]*/;

const KEYWORDS = {
  COMPILED: "comp",
  PY: "py",
  EXEC: "exec",
  DISABLED: "disabled",
  FILETYPE: "filetype",
  LOCAL: "local",
  MEM_GB: "mem_gb",
  VMEM_GB: "vmem_gb",
  PREFLIGHT: "preflight",
  RETAIN: "retain",
  SPECIAL: "special",
  SPLIT: "split",
  STRICT: "strict",
  STRUCT: "struct",
  THREADS: "threads",
  USING: "using",
  VOLATILE: "volatile",
  SELF: "self",
  TRUE: "true",
  FALSE: "false",
  MAP: "map",
  CALL: "call",
  AS: "as",
  SRC: "src",
  RETURN: "return",
  STAGE: "stage",
  PIPELINE: "pipeline",
  IN: "in",
  OUT: "out",
  INT: "int",
  STRING: "string",
  PATH: "path",
  FLOAT: "float",
  BOOL: "bool",
  NULL: "null",
};

const INCLUDE_DIRECTIVE = "@include";

module.exports = grammar({
  name: "martian",

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  word: ($) => $.identifier,

  conflicts: ($) => [[$.field_declaration]],

  rules: {
    source_file: ($) =>
      choice(
        seq($.includes, $._dec_list),
        seq($.includes, $._dec_list, $.call_expression),
        seq($.includes, $.call_expression),
        $._dec_list,
        seq($._dec_list, $.call_expression),
        $.call_expression,
        $._val_expr
      ),

    includes: ($) => repeat1($.include),

    include: ($) => seq(INCLUDE_DIRECTIVE, field("include", $.string)),

    _dec_list: ($) => repeat1($._declaration),

    _declaration: ($) =>
      choice(
        $.filetype_statement,
        $.stage_expression,
        $.pipeline_expression,
        $.struct_expression
      ),

    filetype_statement: ($) =>
      seq(KEYWORDS.FILETYPE, field("filetype", $._id_list), ";"),

    pipeline_expression: ($) =>
      seq(
        "pipeline",
        field("name", $.identifier),
        "(",
        field("parameters", $.pipeline_parameters),
        ")",
        "{",
        optional($._call_stm_list),
        $.return,
        optional($.pipeline_retain),
        "}"
      ),

    pipeline_parameters: ($) => choice(
      seq($._input_parameters),
      seq($._output_parameters),
      seq($._input_parameters, $._output_parameters),
    ),

    stage_expression: ($) =>
      seq(
        "stage",
        field("name", $.identifier),
        "(",
        field("parameters", $.stage_parameters),
        ")",
        optional($.split_parameters),
        optional($.resources),
        optional($.stage_retain)
      ),

    stage_parameters: ($) => choice(
      $.source,
      seq($._input_parameters, $.source),
      seq($._output_parameters, $.source),
      seq($._input_parameters, $._output_parameters, $.source),
    ),

    struct_expression: ($) =>
      seq(
        KEYWORDS.STRUCT,
        field("name", $.identifier),
        "(",
        field("body", $.field_declaration_list),
        ")"
      ),

    resources: ($) => seq(KEYWORDS.USING, "(", $._resource_list, ")"),

    _resource_list: ($) => repeat1($.resource),

    resource: ($) =>
      choice(
        seq(
          field("resource", KEYWORDS.THREADS),
          "=",
          field("value", $.number),
          ","
        ),
        seq(
          field("resource", KEYWORDS.MEM_GB),
          "=",
          field("value", $.number),
          ","
        ),
        seq(
          field("resource", KEYWORDS.VMEM_GB),
          "=",
          field("value", $.number),
          ","
        ),
        seq(
          field("resource", KEYWORDS.SPECIAL),
          "=",
          field("value", $.string),
          ","
        ),
        seq(
          field("resource", KEYWORDS.VOLATILE),
          "=",
          field("value", KEYWORDS.STRICT),
          ","
        ),
        seq(
          field("resource", KEYWORDS.VOLATILE),
          "=",
          field("value", KEYWORDS.FALSE),
          ","
        )
      ),

    number: ($) => choice($.integer, $.float),

    stage_retain: ($) =>
      seq(KEYWORDS.RETAIN, "(", optional($.stage_retain_list), ")"),

    stage_retain_list: ($) => repeat1(seq($.identifier, ",")),

    _id_list: ($) => choice($._path_id, $._nonpath_id),

    _path_id: ($) =>
      prec.right(
        seq(repeat1(seq(field("path", $.identifier), ".")), $.identifier)
      ),
    _nonpath_id: ($) => $.identifier,

    _arr_list: (_) => repeat1(seq("[", "]")),

    _input_parameters: ($) => repeat1($.input_parameter),

    input_parameter: ($) =>
      seq(
        "in",
        field("type", $._type_id),
        field("name", $.identifier),
        optional(field("help", $.string)),
        ","
      ),

    _output_parameters: ($) => repeat1($.output_parameter),

    output_parameter: ($) =>
      choice(
        seq("out", field("type", $._type_id), ","),
        seq("out", field("type", $._type_id), field("name", $.identifier), ","),
        seq(
          "out",
          field("type", $._type_id),
          field("name", $.identifier),
          field("help", choice($.identifier, $.string)),
          ","
        ),
        seq(
          "out",
          field("type", $._type_id),
          field("name", $.identifier),
          field("help", choice($.identifier, $.string)),
          field("outname", $.string),
          ","
        )
      ),

    field_declaration_list: ($) => repeat1($.field_declaration),

    field_declaration: ($) =>
      choice(
        seq(field("type", $._type_id), field("name", $.identifier), ","),
        seq(
          field("type", $._type_id),
          field("name", $.identifier),
          field("help", $.string),
          ","
        ),
        seq(
          field("type", $._type_id),
          field("name", $.identifier),
          field("help", $.string),
          field("outname", $.string),
          ","
        )
      ),

    source: ($) =>
      seq(
        KEYWORDS.SRC,
        field("type", $.src_lang),
        field("file", $.string),
        ","
      ),

    type: ($) => choice($._nonmap_type, KEYWORDS.MAP),

    _array_type: ($) => seq($.type, $._arr_list),

    _map_inner: ($) => choice($._nonmap_type, seq($._nonmap_type, $._arr_list)),
    _map_inner_scalar: ($) => alias($._nonmap_type, $.type),
    _map_inner_array: ($) =>
      alias(seq($._nonmap_type, $._arr_list), $._array_type),

    map_type: ($) =>
      seq(KEYWORDS.MAP, "<", $._map_inner, ">", optional($._arr_list)),

    _nonmap_type: ($) =>
      choice(
        KEYWORDS.INT,
        KEYWORDS.STRING,
        KEYWORDS.PATH,
        KEYWORDS.FLOAT,
        KEYWORDS.BOOL,
        $._id_list
      ),

    _type_id: ($) => choice($.map_type, $.type, $._array_type),

    src_lang: (_) => choice(KEYWORDS.PY, KEYWORDS.EXEC, KEYWORDS.COMPILED),

    split_parameters: ($) =>
      choice(
        seq(
          KEYWORDS.SPLIT,
          KEYWORDS.USING,
          "(",
          $._input_parameters,
          $._output_parameters,
          ")"
        ),
        seq(KEYWORDS.SPLIT, "(", $._input_parameters, $._output_parameters, ")")
      ),

    return: ($) => choice(seq(KEYWORDS.RETURN, "(", $.bindings, ")")),

    pipeline_retain: ($) =>
      choice(seq(KEYWORDS.RETAIN, "(", optional($.pipeline_retain_list), ")")),

    pipeline_retain_list: ($) => repeat1(seq($._ref_expr, ",")),

    _call_stm_list: ($) => repeat1($.call_expression),

    _call_stm_begin: ($) =>
      seq(
        "call",
        optional($.modifiers),
        field("name", $.identifier),
        optional(seq(KEYWORDS.AS, field("alias", $.identifier)))
      ),

    call_expression: ($) =>
      seq(
        choice(
          seq($._call_stm_begin, "(", ")"),
          seq($._call_stm_begin, "(", $.bindings, ")"),
          seq(
            KEYWORDS.MAP,
            $._call_stm_begin,
            "(",
            $.split_bind_stm_list,
            ")"
          )
        ),
        repeat(seq(KEYWORDS.USING, "(", $._modifier_stm_list, ")"))
      ),

    modifiers: (_) =>
      prec.right(
        repeat1(choice(KEYWORDS.LOCAL, KEYWORDS.PREFLIGHT, KEYWORDS.VOLATILE))
      ),

    _modifier_stm_list: ($) => repeat1($.modifier),

    modifier: ($) =>
      choice(
        seq(
          choice(KEYWORDS.LOCAL, KEYWORDS.PREFLIGHT, KEYWORDS.VOLATILE),
          "=",
          $.bool_expr,
          ","
        ),
        seq(KEYWORDS.DISABLED, "=", $._ref_expr, ",")
      ),

    _nonempty_bind_stm_list: ($) => prec.left(repeat1($.bind)),

    bindings: ($) =>
      choice(
        $._nonempty_bind_stm_list,
        seq($._nonempty_bind_stm_list, $.wildcard_bind),
        $.wildcard_bind
      ),

    _split_bind_stm_list_partial: ($) =>
      seq(
        choice(
          $.split_bind_stm,
          seq($._nonempty_bind_stm_list, $.split_bind_stm)
        ),
        repeat(choice($.split_bind_stm, $.bind))
      ),

    split_bind_stm_list: ($) =>
      choice(
        $._split_bind_stm_list_partial,
        seq($._split_bind_stm_list_partial, $.wildcard_bind)
      ),

    bind: ($) =>
      seq(field("name", $.identifier), "=", field("value", $._expr), ","),

    wildcard_bind: ($) =>
      choice(
        seq("*", "=", $._ref_expr, ","),
        seq("*", "=", KEYWORDS.SELF, ",")
      ),

    split_bind_stm: ($) =>
      choice(
        seq($.identifier, "=", KEYWORDS.SPLIT, $.nonempty_collection_exp, ","),
        seq($.identifier, "=", KEYWORDS.SPLIT, $._ref_expr, ",")
      ),

    nonempty_collection_exp: ($) =>
      choice($._nonempty_array_expr, $._nonempty_map_expr),

    _expr_list_partial: ($) =>
      prec.right(seq(repeat(seq($._expr, ",")), $._expr, optional(","))),

    _expr_list: ($) => $._expr_list_partial,
    //prec.right(choice(seq($._expr_list_partial, ","), $._expr_list_partial)),

    kvpair_list_partial: ($) => {
      const atom = seq($.string, ":", $._expr);
      return prec.right(seq(repeat(seq(atom, ",")), atom));
    },

    kvpair_list: ($) => seq($.kvpair_list_partial, optional(",")),

    struct_vals_list_partial: ($) => {
      const atom = seq($.identifier, ":", $._expr);
      return prec.right(seq(repeat(seq(atom, ",")), atom));
    },

    struct_vals_list: ($) => seq($.struct_vals_list_partial, optional(",")),

    _expr: ($) => choice($._val_expr, $._ref_expr),

    _val_expr: ($) =>
      choice(
        $.float,
        $.integer,
        $.string,
        $.array_expr,
        $.map_expr,
        $.bool_expr,
        KEYWORDS.NULL
      ),

    _nonempty_array_expr: ($) => seq("[", $._expr_list, "]"),

    array_expr: ($) => choice($._nonempty_array_expr, seq("[", "]")),

    _nonempty_map_expr: ($) => seq("{", $.kvpair_list, "}"),

    map_expr: ($) =>
      choice(
        $._nonempty_map_expr,
        // seq("{", $.struct_vals_list, "}"),
        seq("{", "}")
      ),

    bool_expr: (_) => choice(KEYWORDS.TRUE, KEYWORDS.FALSE),

    _ref_expr: ($) =>
      choice(
        seq($.identifier, ".", $._id_list),
        //seq($.id, ".", $._default), // TODO: What is default?
        $.identifier,
        seq(KEYWORDS.SELF, ".", $.identifier),
        seq(KEYWORDS.SELF, $.identifier, ".", $._id_list)
      ),

    id: ($) =>
      choice(
        $.identifier
        //KEYWORDS.COMPILED,
        //KEYWORDS.DISABLED,
        //KEYWORDS.EXEC,
        //KEYWORDS.FILETYPE,
        //KEYWORDS.LOCAL,
        //KEYWORDS.MEM_GB,
        //KEYWORDS.VMEM_GB,
        //KEYWORDS.PREFLIGHT,
        //KEYWORDS.RETAIN,
        //KEYWORDS.SPECIAL,
        //KEYWORDS.SPLIT,
        //KEYWORDS.STRICT,
        //KEYWORDS.struct_expression,
        //KEYWORDS.THREADS,
        //KEYWORDS.USING,
        //KEYWORDS.VOLATILE,
      ),

    string: ($) =>
      choice(
        seq('""'),
        seq("''"),
        seq('"', $._string_inner, '"'),
        seq("'", $._string_inner, "'"),
      ),

    _string_inner: ($) =>
      repeat1(choice(token.immediate(/[^\\"\n]+/), $._escape_sequence)),

    _escape_sequence: (_) =>
      choice('\\"', "\\\\", "\\b", "\\n", "\\r", "\\t", /\\u[0-9a-fA-F]{4}/),

    comment: (_) => token(seq("#", /.*/)),

    integer: (_) => /-?\d+/,
    float: (_) => /-?\d+\.\d+/,

    identifier: (_) => ID,
  },
});




