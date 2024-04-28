/**
 * @file Martian grammar for tree-sitter
 * @author Logan Morrison <dr.logan.morrison@gmail.com>
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types='tree-sitter-cli/dsl' />
// @ts-checkconst ID = /_?[a-zA-Z][a-zA-Z0-9_]*/;

const ID = /_?[a-zA-Z][a-zA-Z0-9_]*/;

const keywords = {
  include: '@include',
  compiled: 'comp',
  py: 'py',
  exec: 'exec',
  disabled: 'disabled',
  filetype: 'filetype',
  local: 'local',
  mem_gb: 'mem_gb',
  vmem_gb: 'vmem_gb',
  preflight: 'preflight',
  retain: 'retain',
  special: 'special',
  split: 'split',
  strict: 'strict',
  struct: 'struct',
  threads: 'threads',
  using: 'using',
  volatile: 'volatile',
  self: 'self',
  true: 'true',
  false: 'false',
  map: 'map',
  call: 'call',
  as: 'as',
  src: 'src',
  return: 'return',
  stage: 'stage',
  pipeline: 'pipeline',
  in: 'in',
  out: 'out',
  int: 'int',
  string: 'string',
  path: 'path',
  float: 'float',
  bool: 'bool',
  null: 'null',
  file: 'file',
  default: 'default',
};

module.exports = grammar({
  name: 'martian',

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  word: ($) => $.identifier,

  conflicts: (_) => [],

  inline: $ => [
    $._number,
    $._typed_default_parameter,
    $._typed_parameter,
    $._typed_parameter_help,
    $._typed_parameter_help_rename,
    $._val_exp,
  ],

  supertypes: _ => [],

  rules: {

    source_file: ($) => repeat(
      choice(
        $.include_statement,
        $.filetype_declaration,
        $.stage_definition,
        $.pipeline_definition,
        $.struct_definition,
        $.call_statement,
        $._val_exp,
      ),
    ),

    // -----------------------------------------------------------------------
    // ==== Includes =========================================================
    // -----------------------------------------------------------------------
    // An include is something of the form:
    //      @include 'path/to/file.mro'

    include_statement: ($) => seq(keywords.include, field('file', $.string_literal)),

    // -----------------------------------------------------------------------
    // ==== Structs ==========================================================
    // -----------------------------------------------------------------------
    // A 'struct' is something of the form:
    //      struct Point(
    //          float x,
    //          int[] y,
    //          int    d2   'foo',
    //          json  dest  'help' 'dest.xml',
    //      )

    struct_definition: ($) => seq(
      keywords.struct,
      field('name', $.identifier),
      '(',
      field('fields', optional($.field_list)),
      ')',
    ),

    field_list: ($) => repeat1($.field),

    field: ($) => seq(
      choice(
        $._typed_parameter,
        $._typed_parameter_help,
        $._typed_parameter_help_rename,
      ),
      ',',
    ),


    // -----------------------------------------------------------------------
    // ==== Pipeline =========================================================
    // -----------------------------------------------------------------------
    //      pipeline AWESOME(
    //          in  string     key1       'help text',
    //          in  string     value1,
    //          in  string     key2,
    //          in  string     value2,
    //          in  Pointalism struct_in,
    //          # Pipeline arguments get comments too.
    //          out json[]     outfile    'The json file containing all of the keys and values.'  'all_keys',
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
    //                  d3_is_a_file_with_a_long_name: 'foo.bar',
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

    pipeline_definition: ($) => seq(
      keywords.pipeline,
      field('name', $.identifier),
      '(',
      field('params', $.parameter_list),
      ')',
      '{',
      field('calls', optional($.call_statement_list)),
      field('return', $.return_statement),
      field('retain', optional($.retain_statement)),
      '}',
    ),

    call_statement_list: ($) => repeat1($.call_statement),

    return_statement: ($) => seq(keywords.return, '(', optional($.binding_list), ')'),

    // -----------------------------------------------------------------------
    // ==== Stage ============================================================
    // -----------------------------------------------------------------------
    // A 'stage' is something of the form:
    //      stage STAGE_NAME(
    //          # Input parameters
    //          in string                    key,
    //          in int[]                     y,
    //          in  json                     start,
    //          in  string                   fail_file  "The file to \"check\' to force failure.',
    //          in  map<Point>               point,
    //          # Output parameters
    //          out json                     result    ''  'out name',
    //          out Point[]                  arr,
    //          out map<STRUCT_CONSUMER>     flat_map,
    //          # The source file.
    //          src py                       'stages/add_key',
    //          # or src exec     'stages/whatever arg',
    //          # or src comp    'bin/sum_squares mode_arg',
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

    stage_definition: ($) => seq(
      keywords.stage,
      field('name', $.identifier),
      '(',
      field('params', optional($.parameter_list)),
      field('src', $.source_declaration),
      ')',
      field('split', optional($.split_statement)),
      field('using', optional($.using_statement)),
      field('retain', optional($.retain_statement)),
    ),


    // A source declartion for Martian stages.
    //
    // Example:
    // ```martian
    // stage MY_STAGE(
    //  in int x,
    //  out int y,
    //  # Source declaration
    //  src py 'path/to/source',
    // )
    // ```
    source_declaration: ($) => seq(
      keywords.src,
      field('type', $.source_type),
      field('source_path', $.string_literal),
      ',',
    ),

    source_type: (_) => choice(
      keywords.py,
      keywords.compiled,
      keywords.exec,
    ),


    // -----------------------------------------------------------------------
    // ==== Resource Statements ==============================================
    // -----------------------------------------------------------------------

    split_statement: ($) => seq(
      keywords.split,
      optional(keywords.using),
      '(',
      field('params', optional($.parameter_list)),
      ')',
    ),

    using_statement: ($) => seq(
      'using',
      '(',
      field('resources', optional($.resource_list)),
      ')',
    ),

    resource_list: ($) => repeat1($.resource),

    resource: ($) => seq(
      field('target', $.resource_type),
      '=',
      field('value', $.resource_value),
      ',',
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
      $.reference_expression, $.literal,
    ),


    // Retain list is a statement of the form
    //  retain (
    //    x = y,
    //  )
    retain_statement: ($) => seq(
      keywords.retain,
      '(',
      repeat(field('name', seq($.reference_expression, ','))),
      ')',
    ),


    // -----------------------------------------------------------------------
    // ==== Stage and Pipeline Parameter Lists ===============================
    // -----------------------------------------------------------------------

    parameter_list: ($) => repeat1(
      choice(
        $.input_parameter,
        $.output_parameter,
      ),
    ),

    input_parameter: ($) => seq(
      keywords.in,
      choice(
        $._typed_parameter,
        $._typed_parameter_help,
      ),
      ',',
    ),

    output_parameter: ($) => seq(
      keywords.out,
      choice(
        $._typed_default_parameter,
        $._typed_parameter,
        $._typed_parameter_help,
        $._typed_parameter_help_rename,
      ),
      ',',
    ),

    _typed_default_parameter: ($) => seq(
      field('type', $.parameter_type),
    ),

    _typed_parameter: ($) => seq(
      field('type', $.parameter_type),
      field('name', $.identifier),
    ),

    _typed_parameter_help: ($) => seq(
      field('type', $.parameter_type),
      field('name', $.identifier),
      field('help', $.string_literal),
    ),

    _typed_parameter_help_rename: ($) => seq(
      field('type', $.parameter_type),
      field('name', $.identifier),
      field('help', $.string_literal),
      field('output_name', $.string_literal),
    ),

    parameter_type: ($) => choice(
      $.primitive_type,
      // map<int>, map<int[]>
      $.map_type,
      // int[], Point[], map<string>[], map<int[]>[], json[]
      $.array_type,
      // json, Point, ...
      $.identifier,
      // ome.tif
      $.scoped_identifier,
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
      seq(keywords.map, '<', field('value_type', $.parameter_type), '>'),
    ),

    array_type: ($) => seq(
      field('value_type', $.parameter_type),
      // int[], int[][],
      seq('[', ']'),
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
    //              'four',
    //              ADD_KEY3.result,
    //          ],
    //          foo1               = {
    //              'item': STRUCT_CONSUMER,
    //          },
    //          # Comments can go on arguments as well.
    //          failfile = "fail \n\"1\'',
    //          start    = null,
    //      ) using (
    //          local = true,
    //      )
    //
    //      call MAP_EXAMPLE(
    //          foo = {
    //              'bar': 'baz',
    //              # Comments inside a map expression.
    //              'bing': null,
    //              'blarg': {
    //                  # Deeper inside comments.
    //                  'n': 2,
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
    //          key1      = '1',
    //          value1    = 'one',
    //          key2      = '2',
    //          value2    = split [
    //              'two',
    //              'deux',
    //          ],
    //          struct_in = {
    //              dest: 'foo.json',
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
      optional(keywords.map),
      keywords.call,
      field('modifiers', optional($.modifiers)),
      field('name', $.identifier),
      optional(alias($._call_alias, $.alias)),
      '(',
      field('params', optional($.binding_list)),
      ')',
      field('using', optional($.using_statement)),
    ),

    _call_alias: ($) => seq(
      keywords.as,
      field('alias', $.identifier),
    ),

    modifiers: (_) => repeat1(choice(
      keywords.local,
      keywords.preflight,
      keywords.volatile,
    )),

    // -----------------------------------------------------------------------
    // ==== Bindings =========================================================
    // -----------------------------------------------------------------------

    binding_list: ($) => repeat1($.binding),

    binding: ($) => seq(
      field('target', $.binding_target),
      '=',
      optional(keywords.split),
      field('value', $.expression),
      ',',
    ),

    expression: ($) => choice(
      $.reference_expression,
      $._val_exp,
    ),

    _val_exp: $ => choice(
      $.array_expression,
      $.map_expression,
      $.literal,
    ),

    binding_target: ($) => choice(
      '*',
      $.identifier,
    ),

    wildcard_bind: $ => seq(
      '*',
      '=',
      field('target', choice($.reference_expression, keywords.self)),
    ),

    // -----------------------
    // ==== Array Binding ====
    // -----------------------

    array_expression: ($) => seq(
      '[',
      sepBy(',', field('element', $.expression)),
      ']',
    ),

    // ---------------------
    // ==== Map Binding ====
    // ---------------------

    // Technically, we can only have:
    //    seq('{', $.string, ':' $.exp, '}')
    // or
    //    seq('{', $.identifier, ':' $.exp, '}')
    // This rule is more relaxed.
    map_expression: ($) => seq(
      '{',
      sepBy(',', $.pair),
      '}',
    ),

    // A `pair` is a statement of the form:
    //  key: value
    pair: ($) => seq(
      field('key', choice($.string_literal, $.identifier)),
      ':',
      field('value', $.expression),
    ),

    // -----------------------------------------------------------------------
    // ==== File Type Declaration ============================================
    // -----------------------------------------------------------------------
    // The file type declaration is something of the form:
    //      filetype json;

    filetype_declaration: ($) => seq(
      keywords.filetype,
      field('filetype', choice($.identifier, $.scoped_identifier)),
      ';',
    ),

    // filetype_name: (_) => /(?:[a-zA-z0-9_]+\.)*[a-zA-z0-9_]+/,

    // ----------------------
    // ==== Path Binding ====
    // ----------------------


    // Something like self.value or STAGE.value.other_value
    reference_expression: $ => choice(
      $.identifier,
      keywords.self,
      $.reference_list,
    ),

    reference_list: $ => choice(
      $.scoped_identifier,
      seq(field('value', $.identifier), '.', field('field', keywords.default)),
      seq(field('value', keywords.self), '.', field('field', $.identifier)),
      seq(field('value', keywords.self), '.', field('field', $.scoped_identifier)),
    ),

    scoped_identifier: ($) => seq(
      field('value', $.identifier),
      field('field', repeat1(seq('.', $.identifier))),
    ),

    // -----------------------------------------------------------------------
    // ==== Constants ========================================================
    // -----------------------------------------------------------------------

    literal: ($) => choice(
      $.string_literal,
      $._number,
      $.boolean_literal,
      $.null_literal,
    ),

    boolean_literal: (_) => choice('true', 'false'),

    null_literal: (_) => 'null',

    // ----------------
    // ==== String ====
    // ----------------

    string_literal: ($) => seq('"', $._string_inner, '"'),

    _string_inner: (_) => /((?:[^\\\"]|\\.)*)/,

    // _string_inner: ($) => choice(
    //   $._string_inner_constant_character_escape_mro,
    //   $._string_inner_invalid_illegal_unknown_escape_mro,
    //   $._string_inner_quoted_double_character_mro,
    // ),

    // _character_escape: (_) => /\\(?:[0-7]{3}|[abfnrtv\\\"]|x[0-9a-fA-F]{2}|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})/,
    // _unknown_escape: (_) => /\\(?:[0-7]+[^0-7]|[xuU][0-9a-fA-F]*[^0-9a-fA-F]|.)/,
    // _quoted_double_character: (_) => /[^\\\"]/,

    // ----------------
    // ==== Number ====
    // ----------------

    _number: ($) => choice($.float_literal, $.integer_literal),

    float_literal: (_) => /-?[0-9]+(\.[0-9]+[eE][+-]?|[eE][+-]?|\.)[0-9]+/,

    integer_literal: (_) => /-?0*[0-9]{1,19}/,

    // -----------------------------------------------------------------------
    // ==== Comments =========================================================
    // -----------------------------------------------------------------------

    comment: (_) => token(seq('#', /.*/)),

    // -----------------------------------------------------------------------
    // ==== Identifier =======================================================
    // -----------------------------------------------------------------------

    identifier: (_) => ID,

  },
});

/**
 * Create a rule that matches a rule seperated by a token.
 * @param {*} sep The seperation token.
 * @param {*} rule The rule.
 * @return {*} The rule.
 */
function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)), optional(sep));
}

/**
 * Same as `sepBy1` except the rule is optional.
 * @param {*} sep The seperation token.
 * @param {*} rule The rule.
 * @return {*} The rule.
 */
function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}

