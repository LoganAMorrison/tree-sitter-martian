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
};

const INCLUDE_DIRECTIVE = "@include";

module.exports = grammar({
  name: "martian",

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  word: ($) => $.identifier,

  conflicts: ($) => [[$.struct_field]],

  rules: {
    source_file: ($) =>
      choice(
        seq($.includes, $._dec_list),
        seq($.includes, $._dec_list, $.call_stm),
        seq($.includes, $.call_stm),
        $._dec_list,
        seq($._dec_list, $.call_stm),
        $.call_stm,
        $.val_exp
      ),

    includes: ($) => repeat1($.include),

    include: ($) => seq(INCLUDE_DIRECTIVE, field("include", $.string)),

    _dec_list: ($) => repeat1($._declaration),

    _declaration: ($) =>
      choice($.filetype_statement, $.stage, $.pipeline, $.struct),

    filetype_statement: ($) =>
      seq(KEYWORDS.FILETYPE, field("filetype", $.id_list), ";"),

    pipeline: ($) =>
      seq(
        "pipeline",
        field("name", $.identifier),
        "(",
        $._input_parameters,
        $._output_parameters,
        ")",
        "{",
        optional($.call_stm_list),
        $.return_stm,
        optional($.pipeline_retain),
        "}"
      ),

    stage: ($) =>
      seq(
        "stage",
        field("name", $.identifier),
        "(",
        $._input_parameters,
        $._output_parameters,
        $.source,
        ")",
        optional($.split_param_list),
        optional($.resources),
        optional($.stage_retain)
      ),

    struct: ($) =>
      seq(KEYWORDS.STRUCT, $.identifier, "(", $.struct_field_list, ")"),

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

    id_list: ($) =>
      prec.right(seq(repeat(seq($.identifier, ".")), $.identifier)),

    arr_list: ($) => repeat1(seq("[", "]")),

    _input_parameters: ($) => repeat1($.input_parameter),

    input_parameter: ($) =>
      seq(
        "in",
        field("type", $.type_id),
        field("name", $.identifier),
        optional(field("help", $.string)),
        ","
      ),

    _output_parameters: ($) => repeat1($.output_parameter),

    output_parameter: ($) =>
      choice(
        seq("out", field("type", $.type_id), ","),
        seq(
          "out",
          field("type", $.type_id),
          field("help", choice($.identifier, $.string)),
          ","
        ),
        seq(
          "out",
          field("type", $.type_id),
          field("help", choice($.identifier, $.string)),
          field("outname", $.string),
          ","
        )
      ),

    struct_field_list: ($) => repeat1($.struct_field),

    struct_field: ($) =>
      choice(
        seq(field("type", $.type_id), field("name", $.identifier), ","),
        seq(
          field("type", $.type_id),
          field("name", $.identifier),
          field("help", $.string),
          ","
        ),
        seq(
          field("type", $.type_id),
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

    _nonmap_type: ($) =>
      choice(
        KEYWORDS.INT,
        KEYWORDS.STRING,
        KEYWORDS.PATH,
        KEYWORDS.FLOAT,
        KEYWORDS.BOOL,
        $.id_list
      ),

    type_id: ($) =>
      choice(
        seq(
          KEYWORDS.MAP,
          "<",
          $._nonmap_type,
          optional($.arr_list),
          ">",
          optional($.arr_list)
        ),
        seq($.type, optional($.arr_list))
      ),

    src_lang: ($) => choice(KEYWORDS.PY, KEYWORDS.EXEC, KEYWORDS.COMPILED),

    split_param_list: ($) =>
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

    return_stm: ($) => choice(seq(KEYWORDS.RETURN, "(", $.bind_stm_list, ")")),

    pipeline_retain: ($) =>
      choice(seq(KEYWORDS.RETAIN, "(", optional($.pipeline_retain_list), ")")),

    pipeline_retain_list: ($) => repeat1(seq($.ref_exp, ",")),

    call_stm_list: ($) => repeat1($.call_stm),

    call_stm_begin: ($) =>
      seq(
        KEYWORDS.CALL,
        optional($.modifiers),
        $.identifier,
        optional(seq(KEYWORDS.AS, $.identifier))
      ),

    call_stm: ($) =>
      seq(
        choice(
          seq($.call_stm_begin, "(", $.bind_stm_list, ")"),
          seq(KEYWORDS.MAP, $.call_stm_begin, "(", $.split_bind_stm_list, ")")
        ),
        repeat(seq(KEYWORDS.USING, "(", $.modifier_stm_list, ")"))
      ),

    modifiers: ($) =>
      prec.right(
        repeat1(choice(KEYWORDS.LOCAL, KEYWORDS.PREFLIGHT, KEYWORDS.VOLATILE))
      ),

    modifier_stm_list: ($) => repeat1($.modifier_stm),

    modifier_stm: ($) =>
      choice(
        seq(
          choice(KEYWORDS.LOCAL, KEYWORDS.PREFLIGHT, KEYWORDS.VOLATILE),
          "=",
          $.bool_exp,
          ","
        ),
        seq(KEYWORDS.DISABLED, "=", $.ref_exp, ",")
      ),

    nonempty_bind_stm_list: ($) => prec.right(repeat1($.bind_stm)),

    bind_stm_list: ($) =>
      choice(
        $.nonempty_bind_stm_list,
        seq($.nonempty_bind_stm_list, $.wildcard_bind),
        $.wildcard_bind
      ),

    split_bind_stm_list_partial: ($) =>
      seq(
        choice(
          $.split_bind_stm,
          seq($.nonempty_bind_stm_list, $.split_bind_stm)
        ),
        repeat(choice($.split_bind_stm, $.bind_stm))
      ),

    split_bind_stm_list: ($) =>
      choice(
        $.split_bind_stm_list_partial,
        seq($.split_bind_stm_list_partial, $.wildcard_bind)
      ),

    bind_stm: ($) => seq($.identifier, "=", $.exp, ","),

    wildcard_bind: ($) =>
      choice(seq("*", "=", $.ref_exp, ","), seq("*", "=", KEYWORDS.SELF, ",")),

    split_bind_stm: ($) =>
      choice(
        seq($.identifier, "=", KEYWORDS.SPLIT, $.nonempty_collection_exp, ","),
        seq($.identifier, "=", KEYWORDS.SPLIT, $.ref_exp, ",")
      ),

    nonempty_collection_exp: ($) =>
      choice($.nonempty_array_exp, $.nonempty_map_exp),

    exp_list_partial: ($) => prec.right(seq(repeat(seq($.exp, ",")), $.exp)),

    exp_list: ($) => seq($.exp_list_partial, optional(",")),

    kvpair_list_partial: ($) => {
      const atom = seq($.string, ":", $.exp);
      return prec.right(seq(repeat(seq(atom, ",")), atom));
    },

    kvpair_list: ($) =>
      choice(seq($.kvpair_list_partial, ","), $.kvpair_list_partial),

    struct_vals_list_partial: ($) => {
      const atom = seq($.identifier, ":", $.exp);
      return prec.right(seq(repeat(seq(atom, ",")), atom));
    },

    struct_vals_list: ($) =>
      choice(seq($.struct_vals_list_partial, ","), $.struct_vals_list_partial),

    exp: ($) => choice($.val_exp, $.ref_exp),

    val_exp: ($) =>
      choice(
        $.float,
        $.integer,
        $.string,
        $.array_exp,
        $.map_exp,
        $.bool_exp
        // NULL,
      ),

    nonempty_array_exp: ($) => seq("[", $.exp_list, "]"),

    array_exp: ($) => choice($.nonempty_array_exp, seq("[", "]")),

    nonempty_map_exp: ($) => seq("{", $.kvpair_list, "}"),

    map_exp: ($) =>
      choice(
        $.nonempty_map_exp,
        seq("{", $.struct_vals_list, "}"),
        seq("{", "}")
      ),

    bool_exp: ($) => choice(KEYWORDS.TRUE, KEYWORDS.FALSE),

    ref_exp: ($) =>
      choice(
        seq($.identifier, ".", $.id_list),
        //seq($.id, ".", $._default), // TODO: What is default?
        $.identifier,
        seq(KEYWORDS.SELF, ".", $.identifier),
        seq(KEYWORDS.SELF, $.identifier, ".", $.id_list)
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
        //KEYWORDS.STRUCT,
        //KEYWORDS.THREADS,
        //KEYWORDS.USING,
        //KEYWORDS.VOLATILE,
      ),

    string: ($) =>
      choice(seq('"', $._string_inner, '"'), seq("'", $._string_inner, "'")),

    _string_inner: ($) =>
      repeat1(choice(token.immediate(/[^\\"\n]+/), $._escape_sequence)),

    _escape_sequence: ($) =>
      choice('\\"', "\\\\", "\\b", "\\n", "\\r", "\\t", /\\u[0-9a-fA-F]{4}/),

    comment: ($) => token(seq("#", /.*/)),

    integer: ($) => /-?\d+/,
    float: ($) => /-?\d+\.\d+/,

    identifier: ($) => ID,
  },
});
