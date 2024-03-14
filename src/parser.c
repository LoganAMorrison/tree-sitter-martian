#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 229
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 2
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 39

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_ATinclude = 2,
  anon_sym_struct = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_pipeline = 7,
  anon_sym_struct = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_pipeline = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_return = 10,
  anon_sym_stage = 11,
  anon_sym_src = 12,
  anon_sym_py = 13,
  anon_sym_comp = 14,
  anon_sym_exec = 15,
  anon_sym_split = 16,
  anon_sym_using = 17,
  anon_sym_EQ = 18,
  anon_sym_mem_gb = 19,
  anon_sym_vmem_gb = 20,
  anon_sym_threads = 21,
  anon_sym_volatile = 22,
  anon_sym_local = 23,
  anon_sym_disabled = 24,
  anon_sym_preflight = 25,
  anon_sym_special = 26,
  anon_sym_retain = 27,
  anon_sym_in = 28,
  anon_sym_out = 29,
  anon_sym_string = 30,
  anon_sym_int = 31,
  anon_sym_float = 32,
  anon_sym_bool = 33,
  anon_sym_path = 34,
  anon_sym_file = 35,
  anon_sym_map = 36,
  anon_sym_LT = 37,
  anon_sym_GT = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  anon_sym_call = 41,
  anon_sym_as = 42,
  anon_sym_STAR = 43,
  anon_sym_self = 44,
  anon_sym_COLON = 45,
  anon_sym_filetype = 46,
  anon_sym_SEMI = 47,
  anon_sym_DOT = 48,
  anon_sym_default = 49,
  sym_true = 50,
  sym_false = 51,
  sym_null = 52,
  anon_sym_DQUOTE = 53,
  sym__string_inner = 54,
  sym__character_escape = 55,
  sym_float = 56,
  sym_integer = 57,
  sym_comment = 58,
  sym_source_file = 59,
  sym_include_statement = 60,
  sym_struct_definition = 61,
  aux_sym__struct_field_list = 62,
  sym_field = 63,
  sym_pipeline_definition = 64,
  sym_return_statement = 65,
  sym_stage_definition = 66,
  sym_source_declaration = 67,
  sym_source_type = 68,
  sym_split_statement = 69,
  sym_using_statement = 70,
  sym_resource_list = 71,
  sym_resource = 72,
  sym_resource_type = 73,
  sym_resource_value = 74,
  sym_retain_statement = 75,
  sym_parameter_list = 76,
  sym_input_parameter = 77,
  sym_output_parameter = 78,
  sym__typed_default_parameter = 79,
  sym__typed_parameter = 80,
  sym__typed_parameter_help = 81,
  sym__typed_parameter_help_rename = 82,
  sym_parameter_type = 83,
  sym_primitive_type = 84,
  sym_map_type = 85,
  sym_array_type = 86,
  sym_call_statement = 87,
  sym__call_alias = 88,
  sym_modifiers = 89,
  sym_binding_list = 90,
  sym_binding = 91,
  sym_expression = 92,
  sym__val_exp = 93,
  sym_binding_target = 94,
  sym_array_expression = 95,
  sym_map_expression = 96,
  sym_pair = 97,
  sym_filetype_declaration = 98,
  sym_reference_expression = 99,
  sym_reference_list = 100,
  sym_scoped_identifier = 101,
  sym__constant = 102,
  sym_string = 103,
  sym__number = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_pipeline_definition_repeat1 = 106,
  aux_sym_stage_definition_repeat1 = 107,
  aux_sym_resource_list_repeat1 = 108,
  aux_sym_retain_statement_repeat1 = 109,
  aux_sym_parameter_list_repeat1 = 110,
  aux_sym_modifiers_repeat1 = 111,
  aux_sym_binding_list_repeat1 = 112,
  aux_sym_array_expression_repeat1 = 113,
  aux_sym_map_expression_repeat1 = 114,
  aux_sym_scoped_identifier_repeat1 = 115,
  alias_sym_call_statement_list = 116,
  alias_sym_fields = 117,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_ATinclude] = "@include",
  [anon_sym_struct] = "struct",
  [anon_sym_struct] = "struct",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_pipeline] = "pipeline",
  [anon_sym_COMMA] = ",",
  [anon_sym_pipeline] = "pipeline",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_return] = "return",
  [anon_sym_stage] = "stage",
  [anon_sym_src] = "src",
  [anon_sym_py] = "py",
  [anon_sym_comp] = "comp",
  [anon_sym_exec] = "exec",
  [anon_sym_split] = "split",
  [anon_sym_using] = "using",
  [anon_sym_EQ] = "=",
  [anon_sym_mem_gb] = "mem_gb",
  [anon_sym_vmem_gb] = "vmem_gb",
  [anon_sym_threads] = "threads",
  [anon_sym_threads] = "threads",
  [anon_sym_volatile] = "volatile",
  [anon_sym_local] = "local",
  [anon_sym_disabled] = "disabled",
  [anon_sym_preflight] = "preflight",
  [anon_sym_special] = "special",
  [anon_sym_retain] = "retain",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_bool] = "bool",
  [anon_sym_path] = "path",
  [anon_sym_file] = "file",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_path] = "path",
  [anon_sym_file] = "file",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_call] = "call",
  [anon_sym_as] = "as",
  [anon_sym_STAR] = "*",
  [anon_sym_self] = "self",
  [anon_sym_COLON] = ":",
  [anon_sym_filetype] = "filetype",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_default] = "default",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_inner] = "_string_inner",
  [sym__character_escape] = "_character_escape",
  [sym__string_inner] = "_string_inner",
  [sym__character_escape] = "_character_escape",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_comment] = "comment",
  [sym_integer] = "integer",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_include_statement] = "include_statement",
  [sym_struct_definition] = "struct_definition",
  [aux_sym__struct_field_list] = "_struct_field_list",
  [sym_field] = "field",
  [sym_pipeline_definition] = "pipeline_definition",
  [sym_return_statement] = "return_statement",
  [sym_stage_definition] = "stage_definition",
  [sym_source_declaration] = "source_declaration",
  [sym_source_type] = "source_type",
  [sym_split_statement] = "split_statement",
  [sym_using_statement] = "using_statement",
  [sym_resource_list] = "resource_list",
  [sym_resource] = "resource",
  [sym_resource_type] = "resource_type",
  [sym_resource_value] = "resource_value",
  [sym_retain_statement] = "retain_statement",
  [sym_parameter_list] = "parameter_list",
  [sym_input_parameter] = "input_parameter",
  [sym_output_parameter] = "output_parameter",
  [sym__typed_default_parameter] = "_typed_default_parameter",
  [sym__typed_parameter] = "_typed_parameter",
  [sym__typed_parameter_help] = "_typed_parameter_help",
  [sym__typed_parameter_help_rename] = "_typed_parameter_help_rename",
  [sym_parameter_type] = "parameter_type",
  [sym_primitive_type] = "primitive_type",
  [sym_map_type] = "map_type",
  [sym_array_type] = "array_type",
  [sym_call_statement] = "call_statement",
  [sym__call_alias] = "alias",
  [sym_modifiers] = "modifiers",
  [sym_binding_list] = "binding_list",
  [sym_binding] = "binding",
  [sym_expression] = "expression",
  [sym__val_exp] = "_val_exp",
  [sym_binding_target] = "binding_target",
  [sym_array_expression] = "array_expression",
  [sym_map_expression] = "map_expression",
  [sym_pair] = "pair",
  [sym_filetype_declaration] = "filetype_declaration",
  [sym_reference_expression] = "reference_expression",
  [sym_reference_list] = "reference_list",
  [sym_scoped_identifier] = "scoped_identifier",
  [sym__constant] = "_constant",
  [sym_string] = "string",
  [sym__number] = "_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_pipeline_definition_repeat1] = "pipeline_definition_repeat1",
  [aux_sym_stage_definition_repeat1] = "stage_definition_repeat1",
  [aux_sym_resource_list_repeat1] = "resource_list_repeat1",
  [aux_sym_retain_statement_repeat1] = "retain_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_binding_list_repeat1] = "binding_list_repeat1",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
  [aux_sym_map_expression_repeat1] = "map_expression_repeat1",
  [aux_sym_scoped_identifier_repeat1] = "scoped_identifier_repeat1",
  [alias_sym_call_statement_list] = "call_statement_list",
  [alias_sym_fields] = "fields",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_pipeline] = anon_sym_pipeline,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_pipeline] = anon_sym_pipeline,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_stage] = anon_sym_stage,
  [anon_sym_src] = anon_sym_src,
  [anon_sym_py] = anon_sym_py,
  [anon_sym_comp] = anon_sym_comp,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_split] = anon_sym_split,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_mem_gb] = anon_sym_mem_gb,
  [anon_sym_vmem_gb] = anon_sym_vmem_gb,
  [anon_sym_threads] = anon_sym_threads,
  [anon_sym_threads] = anon_sym_threads,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_disabled] = anon_sym_disabled,
  [anon_sym_preflight] = anon_sym_preflight,
  [anon_sym_special] = anon_sym_special,
  [anon_sym_retain] = anon_sym_retain,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_filetype] = anon_sym_filetype,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_default] = anon_sym_default,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_inner] = sym__string_inner,
  [sym__character_escape] = sym__character_escape,
  [sym__string_inner] = sym__string_inner,
  [sym__character_escape] = sym__character_escape,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_comment] = sym_comment,
  [sym_integer] = sym_integer,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_include_statement] = sym_include_statement,
  [sym_struct_definition] = sym_struct_definition,
  [aux_sym__struct_field_list] = aux_sym__struct_field_list,
  [sym_field] = sym_field,
  [sym_pipeline_definition] = sym_pipeline_definition,
  [sym_return_statement] = sym_return_statement,
  [sym_stage_definition] = sym_stage_definition,
  [sym_source_declaration] = sym_source_declaration,
  [sym_source_type] = sym_source_type,
  [sym_split_statement] = sym_split_statement,
  [sym_using_statement] = sym_using_statement,
  [sym_resource_list] = sym_resource_list,
  [sym_resource] = sym_resource,
  [sym_resource_type] = sym_resource_type,
  [sym_resource_value] = sym_resource_value,
  [sym_retain_statement] = sym_retain_statement,
  [sym_parameter_list] = sym_parameter_list,
  [sym_input_parameter] = sym_input_parameter,
  [sym_output_parameter] = sym_output_parameter,
  [sym__typed_default_parameter] = sym__typed_default_parameter,
  [sym__typed_parameter] = sym__typed_parameter,
  [sym__typed_parameter_help] = sym__typed_parameter_help,
  [sym__typed_parameter_help_rename] = sym__typed_parameter_help_rename,
  [sym_parameter_type] = sym_parameter_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_map_type] = sym_map_type,
  [sym_array_type] = sym_array_type,
  [sym_call_statement] = sym_call_statement,
  [sym__call_alias] = sym__call_alias,
  [sym_modifiers] = sym_modifiers,
  [sym_binding_list] = sym_binding_list,
  [sym_binding] = sym_binding,
  [sym_expression] = sym_expression,
  [sym__val_exp] = sym__val_exp,
  [sym_binding_target] = sym_binding_target,
  [sym_array_expression] = sym_array_expression,
  [sym_map_expression] = sym_map_expression,
  [sym_pair] = sym_pair,
  [sym_filetype_declaration] = sym_filetype_declaration,
  [sym_reference_expression] = sym_reference_expression,
  [sym_reference_list] = sym_reference_list,
  [sym_scoped_identifier] = sym_scoped_identifier,
  [sym__constant] = sym__constant,
  [sym_string] = sym_string,
  [sym__number] = sym__number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_pipeline_definition_repeat1] = aux_sym_pipeline_definition_repeat1,
  [aux_sym_stage_definition_repeat1] = aux_sym_stage_definition_repeat1,
  [aux_sym_resource_list_repeat1] = aux_sym_resource_list_repeat1,
  [aux_sym_retain_statement_repeat1] = aux_sym_retain_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_binding_list_repeat1] = aux_sym_binding_list_repeat1,
  [aux_sym_array_expression_repeat1] = aux_sym_array_expression_repeat1,
  [aux_sym_map_expression_repeat1] = aux_sym_map_expression_repeat1,
  [aux_sym_scoped_identifier_repeat1] = aux_sym_scoped_identifier_repeat1,
  [alias_sym_call_statement_list] = alias_sym_call_statement_list,
  [alias_sym_fields] = alias_sym_fields,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pipeline] = {
  [anon_sym_pipeline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_py] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_split] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mem_gb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmem_gb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_threads] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preflight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_special] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filetype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
  [sym_true] = {
    .visible = true,
    .named = true,
    .named = true,
  },
  [sym_false] = {
  [sym_false] = {
    .visible = true,
    .named = true,
    .named = true,
  },
  [sym_null] = {
  [sym_null] = {
    .visible = true,
    .named = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_inner] = {
    .visible = false,
    .named = true,
  [sym__string_inner] = {
    .visible = false,
    .named = true,
  },
  [sym__character_escape] = {
  [sym__character_escape] = {
    .visible = false,
    .named = true,
    .named = true,
  },
  [sym_float] = {
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__struct_field_list] = {
    .visible = false,
    .named = false,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_stage_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_source_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_source_type] = {
    .visible = true,
    .named = true,
  },
  [sym_split_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_using_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_list] = {
  [sym_resource_list] = {
    .visible = true,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_type] = {
  [sym_resource_type] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_value] = {
  [sym_resource_value] = {
    .visible = true,
    .named = true,
  },
  [sym_retain_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_input_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_output_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__typed_default_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__typed_parameter] = {
  [sym__typed_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__typed_parameter_help] = {
  [sym__typed_parameter_help] = {
    .visible = false,
    .named = true,
  },
  [sym__typed_parameter_help_rename] = {
  [sym__typed_parameter_help_rename] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_type] = {
  [sym_parameter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_map_type] = {
  [sym_map_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__call_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_list] = {
  [sym_binding_list] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__val_exp] = {
  [sym__val_exp] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_binding_target] = {
  [sym_binding_target] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_map_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_filetype_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_list] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stage_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_list_repeat1] = {
  [aux_sym_resource_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_retain_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binding_list_repeat1] = {
  [aux_sym_binding_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scoped_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_call_statement_list] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_fields] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_calls = 2,
  field_field = 3,
  field_file = 4,
  field_filetype = 5,
  field_help = 6,
  field_key = 7,
  field_name = 8,
  field_output_name = 9,
  field_params = 10,
  field_resources = 11,
  field_source_path = 12,
  field_target = 13,
  field_type = 14,
  field_value = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_calls] = "calls",
  [field_field] = "field",
  [field_file] = "file",
  [field_filetype] = "filetype",
  [field_help] = "help",
  [field_key] = "key",
  [field_name] = "name",
  [field_output_name] = "output_name",
  [field_params] = "params",
  [field_resources] = "resources",
  [field_source_path] = "source_path",
  [field_target] = "target",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 4},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 4, .length = 1},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 4},
  [17] = {.index = 31, .length = 1},
  [18] = {.index = 32, .length = 1},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 3},
  [22] = {.index = 40, .length = 2},
  [23] = {.index = 42, .length = 2},
  [24] = {.index = 44, .length = 1},
  [25] = {.index = 45, .length = 2},
  [26] = {.index = 47, .length = 3},
  [27] = {.index = 50, .length = 4},
  [28] = {.index = 54, .length = 3},
  [29] = {.index = 57, .length = 2},
  [30] = {.index = 59, .length = 2},
  [31] = {.index = 61, .length = 2},
  [32] = {.index = 63, .length = 2},
  [33] = {.index = 65, .length = 3},
  [34] = {.index = 68, .length = 1},
  [35] = {.index = 69, .length = 3},
  [36] = {.index = 72, .length = 2},
  [37] = {.index = 74, .length = 1},
  [38] = {.index = 75, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_file, 1},
  [1] =
    {field_field, 1},
    {field_value, 0},
  [3] =
    {field_filetype, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [7] =
    {field_help, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [10] =
    {field_help, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_output_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [14] =
    {field_key, 0},
    {field_value, 2},
  [16] =
    {field_field, 2},
    {field_value, 0},
  [18] =
    {field_alias, 1},
  [19] =
    {field_name, 1},
    {field_type, 0},
  [21] =
    {field_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [23] =
    {field_help, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [26] =
    {field_type, 1, .inherited = true},
  [27] =
    {field_help, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_output_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [31] =
    {field_type, 0},
  [32] =
    {field_name, 2},
  [33] =
    {field_name, 1},
    {field_params, 3},
  [35] =
    {field_alias, 2, .inherited = true},
    {field_name, 1},
  [37] =
    {field_help, 2},
    {field_name, 1},
    {field_type, 0},
  [40] =
    {field_name, 2},
    {field_params, 4},
  [42] =
    {field_alias, 3, .inherited = true},
    {field_name, 2},
  [44] =
    {field_name, 3},
  [45] =
    {field_target, 0},
    {field_value, 2},
  [47] =
    {field_alias, 2, .inherited = true},
    {field_name, 1},
    {field_params, 4},
  [50] =
    {field_help, 2},
    {field_name, 1},
    {field_output_name, 3},
    {field_output_name, 3},
    {field_type, 0},
  [54] =
    {field_alias, 3, .inherited = true},
    {field_name, 2},
    {field_params, 5},
  [57] =
    {field_name, 3},
    {field_params, 5},
  [59] =
    {field_alias, 4, .inherited = true},
    {field_name, 3},
  [61] =
    {field_target, 0},
    {field_value, 3},
  [63] =
    {field_source_path, 2},
    {field_type, 1},
  [65] =
    {field_alias, 4, .inherited = true},
    {field_name, 3},
    {field_params, 6},
  [68] =
    {field_resources, 2},
  [69] =
    {field_calls, 6},
    {field_name, 1},
    {field_params, 3},
  [72] =
    {field_name, 0},
    {field_name, 1},
  [74] =
    {field_name, 2, .inherited = true},
  [75] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [3] = alias_sym_fields,
  },
  [35] = {
    [6] = alias_sym_call_statement_list,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__struct_field_list, 2,
    aux_sym__struct_field_list,
    alias_sym_fields,
  aux_sym_pipeline_definition_repeat1, 2,
    aux_sym_pipeline_definition_repeat1,
    alias_sym_call_statement_list,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'U') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(50);
      if (lookahead == 'U') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(49);
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead == '0') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT);
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_STAR);
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(28);
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0) ADVANCE(47);
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__character_escape);
      ACCEPT_TOKEN(sym__character_escape);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'x') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(59);
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_py);
      ACCEPT_TOKEN(anon_sym_py);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_int);
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_map);
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_out);
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_src);
      ACCEPT_TOKEN(anon_sym_src);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_bool);
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_call);
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_comp);
      ACCEPT_TOKEN(anon_sym_comp);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_exec);
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 't') ADVANCE(111);
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_null);
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_path);
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_self);
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_true);
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(125);
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == '_') ADVANCE(126);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_false);
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(130);
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_float);
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_local);
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 114:
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_split);
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_stage);
      ACCEPT_TOKEN(anon_sym_stage);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(137);
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_using);
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(140);
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_mem_gb);
      ACCEPT_TOKEN(anon_sym_mem_gb);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(146);
      if (lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_retain);
      ACCEPT_TOKEN(anon_sym_retain);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_return);
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_string);
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_struct);
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_default);
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_special);
      ACCEPT_TOKEN(anon_sym_special);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_threads);
      ACCEPT_TOKEN(anon_sym_threads);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_vmem_gb);
      ACCEPT_TOKEN(anon_sym_vmem_gb);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_disabled);
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_filetype);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_pipeline);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_filetype);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_pipeline);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_preflight);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 48},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 48},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_pipeline] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_pipeline] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_stage] = ACTIONS(1),
    [anon_sym_src] = ACTIONS(1),
    [anon_sym_py] = ACTIONS(1),
    [anon_sym_comp] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_split] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_mem_gb] = ACTIONS(1),
    [anon_sym_vmem_gb] = ACTIONS(1),
    [anon_sym_threads] = ACTIONS(1),
    [anon_sym_threads] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_disabled] = ACTIONS(1),
    [anon_sym_preflight] = ACTIONS(1),
    [anon_sym_special] = ACTIONS(1),
    [anon_sym_retain] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_filetype] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__character_escape] = ACTIONS(1),
    [sym__character_escape] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(197),
    [sym_include_statement] = STATE(3),
    [sym_struct_definition] = STATE(3),
    [sym_pipeline_definition] = STATE(3),
    [sym_stage_definition] = STATE(3),
    [sym_call_statement] = STATE(3),
    [sym__val_exp] = STATE(3),
    [sym_array_expression] = STATE(16),
    [sym_map_expression] = STATE(16),
    [sym_filetype_declaration] = STATE(3),
    [sym__constant] = STATE(16),
    [sym_string] = STATE(16),
    [sym__number] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATinclude] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_pipeline] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_stage] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(21),
    [anon_sym_filetype] = ACTIONS(23),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(25),
    [anon_sym_call] = ACTIONS(21),
    [anon_sym_filetype] = ACTIONS(23),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_float] = ACTIONS(25),
    [sym_integer] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_ATinclude,
    ACTIONS(36), 1,
      anon_sym_struct,
    ACTIONS(39), 1,
      anon_sym_pipeline,
    ACTIONS(42), 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_ATinclude,
    ACTIONS(36), 1,
      anon_sym_struct,
    ACTIONS(39), 1,
      anon_sym_pipeline,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_stage,
    ACTIONS(48), 1,
      anon_sym_map,
    ACTIONS(51), 1,
    ACTIONS(45), 1,
      anon_sym_stage,
    ACTIONS(48), 1,
      anon_sym_map,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_call,
    ACTIONS(57), 1,
      anon_sym_filetype,
    ACTIONS(63), 1,
    ACTIONS(54), 1,
      anon_sym_call,
    ACTIONS(57), 1,
      anon_sym_filetype,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
    ACTIONS(66), 1,
      sym_integer,
    ACTIONS(60), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_float,
    STATE(16), 5,
      sym_array_expression,
      sym_map_expression,
      sym__constant,
      sym_string,
      sym__number,
    STATE(2), 8,
      sym_include_statement,
      sym_struct_definition,
      sym_pipeline_definition,
      sym_stage_definition,
      sym_call_statement,
      sym__val_exp,
      sym_filetype_declaration,
      aux_sym_source_file_repeat1,
  [63] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATinclude,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(7), 1,
      anon_sym_ATinclude,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_pipeline,
    ACTIONS(13), 1,
      anon_sym_pipeline,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_stage,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(15), 1,
      anon_sym_stage,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_call,
    ACTIONS(23), 1,
      anon_sym_filetype,
    ACTIONS(21), 1,
      anon_sym_call,
    ACTIONS(23), 1,
      anon_sym_filetype,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_float,
    STATE(16), 5,
      sym_array_expression,
      sym_map_expression,
      sym__constant,
      sym_string,
      sym__number,
    STATE(2), 8,
      sym_include_statement,
      sym_struct_definition,
      sym_pipeline_definition,
      sym_stage_definition,
      sym_call_statement,
      sym__val_exp,
      sym_filetype_declaration,
      aux_sym_source_file_repeat1,
  [126] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_split,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(77), 1,
      anon_sym_retain,
    ACTIONS(79), 1,
      sym_integer,
    STATE(6), 4,
      sym_split_statement,
      sym_using_statement,
      sym_retain_statement,
      aux_sym_stage_definition_repeat1,
    ACTIONS(71), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [165] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_split,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(77), 1,
      anon_sym_retain,
    ACTIONS(83), 1,
      sym_integer,
    STATE(4), 4,
      sym_split_statement,
      sym_using_statement,
      sym_retain_statement,
      aux_sym_stage_definition_repeat1,
    ACTIONS(81), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [204] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_split,
    ACTIONS(90), 1,
      anon_sym_using,
    ACTIONS(93), 1,
      anon_sym_retain,
    ACTIONS(96), 1,
      sym_integer,
    STATE(6), 4,
      sym_split_statement,
      sym_using_statement,
      sym_retain_statement,
      aux_sym_stage_definition_repeat1,
    ACTIONS(85), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_integer,
    ACTIONS(98), 20,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_COLON,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [272] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    ACTIONS(106), 1,
      anon_sym_self,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(158), 1,
      sym_expression,
    STATE(122), 2,
      sym__val_exp,
      sym_reference_expression,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(16), 5,
      sym_array_expression,
      sym_map_expression,
      sym__constant,
      sym_string,
      sym__number,
  [323] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_self,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(158), 1,
      sym_expression,
    STATE(122), 2,
      sym__val_exp,
      sym_reference_expression,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(16), 5,
      sym_array_expression,
      sym_map_expression,
      sym__constant,
      sym_string,
      sym__number,
  [374] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_self,
    ACTIONS(110), 1,
      anon_sym_split,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(156), 1,
      sym_expression,
    STATE(122), 2,
      sym__val_exp,
      sym_reference_expression,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(16), 5,
      sym_array_expression,
      sym_map_expression,
      sym__constant,
      sym_string,
      sym__number,
  [425] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_self,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(125), 1,
      sym_expression,
    STATE(122), 2,
      sym__val_exp,
      sym_reference_expression,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(16), 5,
      sym_array_expression,
      sym_map_expression,
      sym__constant,
      sym_string,
      sym__number,
  [476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_integer,
    ACTIONS(114), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_integer,
    ACTIONS(118), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(122), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_split,
      anon_sym_using,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_integer,
    ACTIONS(126), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_integer,
    ACTIONS(130), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_integer,
    ACTIONS(134), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_integer,
    ACTIONS(138), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_integer,
    ACTIONS(142), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_integer,
    ACTIONS(146), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_split,
      anon_sym_using,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_integer,
    ACTIONS(150), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_split,
      anon_sym_using,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_integer,
    ACTIONS(154), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [784] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_self,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(158), 1,
      sym_expression,
    STATE(122), 2,
      sym__val_exp,
      sym_reference_expression,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(16), 5,
      sym_array_expression,
      sym_map_expression,
      sym__constant,
      sym_string,
      sym__number,
  [832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_integer,
    ACTIONS(158), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [860] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_self,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(162), 1,
      sym_expression,
    STATE(122), 2,
      sym__val_exp,
      sym_reference_expression,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(16), 5,
      sym_array_expression,
      sym_map_expression,
      sym__constant,
      sym_string,
      sym__number,
  [908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_integer,
    ACTIONS(162), 19,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_split,
      anon_sym_using,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [936] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_self,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(157), 1,
      sym_expression,
    STATE(122), 2,
      sym__val_exp,
      sym_reference_expression,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(16), 5,
      sym_array_expression,
      sym_map_expression,
      sym__constant,
      sym_string,
      sym__number,
  [984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(168), 1,
      sym_integer,
    STATE(58), 1,
      sym_using_statement,
    ACTIONS(166), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(172), 1,
      sym_integer,
    STATE(54), 1,
      sym_using_statement,
    ACTIONS(170), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_integer,
    ACTIONS(174), 18,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_split,
      anon_sym_using,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1073] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      anon_sym_map,
    STATE(35), 1,
      aux_sym__struct_field_list,
    STATE(147), 1,
      sym_parameter_type,
    STATE(196), 1,
      sym__typed_parameter_help_rename,
    STATE(200), 1,
      sym__typed_parameter_help,
    STATE(202), 1,
      sym__typed_parameter,
    STATE(205), 1,
      sym_field,
    STATE(121), 4,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
      sym_scoped_identifier,
    ACTIONS(182), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [1118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(188), 1,
      sym_integer,
    STATE(47), 1,
      sym_using_statement,
    ACTIONS(186), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(192), 1,
      sym_integer,
    STATE(52), 1,
      sym_using_statement,
    ACTIONS(190), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(196), 1,
      sym_integer,
    STATE(48), 1,
      sym_using_statement,
    ACTIONS(194), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1211] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(206), 1,
      anon_sym_map,
    STATE(35), 1,
      aux_sym__struct_field_list,
    STATE(147), 1,
      sym_parameter_type,
    STATE(196), 1,
      sym__typed_parameter_help_rename,
    STATE(200), 1,
      sym__typed_parameter_help,
    STATE(202), 1,
      sym__typed_parameter,
    STATE(205), 1,
      sym_field,
    STATE(121), 4,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
      sym_scoped_identifier,
    ACTIONS(203), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_integer,
    ACTIONS(209), 18,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_split,
      anon_sym_using,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1283] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_map,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym__struct_field_list,
    STATE(147), 1,
      sym_parameter_type,
    STATE(196), 1,
      sym__typed_parameter_help_rename,
    STATE(200), 1,
      sym__typed_parameter_help,
    STATE(202), 1,
      sym__typed_parameter,
    STATE(205), 1,
      sym_field,
    STATE(121), 4,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
      sym_scoped_identifier,
    ACTIONS(182), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [1328] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(217), 1,
      sym_integer,
    STATE(50), 1,
      sym_using_statement,
    ACTIONS(215), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(221), 1,
      sym_integer,
    STATE(53), 1,
      sym_using_statement,
    ACTIONS(219), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(225), 1,
      sym_integer,
    STATE(49), 1,
      sym_using_statement,
    ACTIONS(223), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(229), 1,
      sym_integer,
    STATE(46), 1,
      sym_using_statement,
    ACTIONS(227), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1452] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(233), 1,
      sym_integer,
    STATE(55), 1,
      sym_using_statement,
    ACTIONS(231), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_integer,
    ACTIONS(235), 18,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_split,
      anon_sym_using,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1510] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(241), 1,
      sym_integer,
    STATE(51), 1,
      sym_using_statement,
    ACTIONS(239), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_using,
    ACTIONS(245), 1,
      sym_integer,
    STATE(56), 1,
      sym_using_statement,
    ACTIONS(243), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_integer,
    ACTIONS(247), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_integer,
    ACTIONS(251), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_integer,
    ACTIONS(255), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_integer,
    ACTIONS(259), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_integer,
    ACTIONS(263), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_integer,
    ACTIONS(267), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_integer,
    ACTIONS(271), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_integer,
    ACTIONS(275), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(279), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_integer,
    ACTIONS(283), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_integer,
    ACTIONS(287), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1847] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_map,
    STATE(139), 1,
      sym_parameter_type,
    STATE(208), 1,
      sym__typed_parameter_help_rename,
    STATE(210), 1,
      sym__typed_parameter_help,
    STATE(213), 1,
      sym__typed_parameter,
    STATE(215), 1,
      sym__typed_default_parameter,
    STATE(121), 4,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
      sym_scoped_identifier,
    ACTIONS(182), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_integer,
    ACTIONS(291), 16,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_integer,
    ACTIONS(295), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_integer,
    ACTIONS(299), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_integer,
    ACTIONS(303), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [1983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_integer,
    ACTIONS(307), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [2007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_integer,
    ACTIONS(311), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [2031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_integer,
    ACTIONS(315), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [2055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_integer,
    ACTIONS(319), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [2079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_integer,
    ACTIONS(323), 15,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_LBRACE,
      anon_sym_LBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_LBRACK,
      anon_sym_LBRACK,
      anon_sym_call,
      anon_sym_filetype,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_DQUOTE,
      sym_float,
  [2103] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_self,
    ACTIONS(329), 1,
      sym_float,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(149), 1,
      sym_resource_value,
    ACTIONS(327), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(150), 4,
      sym_reference_expression,
      sym__constant,
      sym_string,
      sym__number,
  [2140] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_map,
    STATE(153), 1,
      sym_parameter_type,
    STATE(217), 1,
      sym__typed_parameter_help,
    STATE(218), 1,
      sym__typed_parameter,
    STATE(121), 4,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
      sym_scoped_identifier,
    ACTIONS(182), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [2173] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_map,
    STATE(159), 1,
      sym_parameter_type,
    STATE(121), 4,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
      sym_scoped_identifier,
    ACTIONS(182), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [2200] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_resource,
    STATE(179), 1,
      sym_resource_list,
    STATE(181), 1,
      sym_resource_type,
    ACTIONS(333), 8,
      anon_sym_mem_gb,
      anon_sym_vmem_gb,
      anon_sym_threads,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_disabled,
      anon_sym_preflight,
      anon_sym_special,
  [2226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_resource,
    STATE(181), 1,
      sym_resource_type,
    ACTIONS(333), 8,
      anon_sym_mem_gb,
      anon_sym_vmem_gb,
      anon_sym_threads,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_disabled,
      anon_sym_preflight,
      anon_sym_special,
  [2249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_resource,
    STATE(181), 1,
      sym_resource_type,
    ACTIONS(333), 8,
      anon_sym_mem_gb,
      anon_sym_vmem_gb,
      anon_sym_threads,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_disabled,
      anon_sym_preflight,
      anon_sym_special,
  [2272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_scoped_identifier_repeat1,
    ACTIONS(339), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_identifier,
  [2292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(148), 1,
      sym_resource,
    STATE(181), 1,
      sym_resource_type,
    ACTIONS(333), 8,
      anon_sym_mem_gb,
      anon_sym_vmem_gb,
      anon_sym_threads,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_disabled,
      anon_sym_preflight,
      anon_sym_special,
  [2312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_scoped_identifier_repeat1,
    ACTIONS(343), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_identifier,
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(348), 8,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
      anon_sym_map,
      sym_identifier,
  [2349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_identifier,
  [2364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      anon_sym_in,
    ACTIONS(354), 1,
      anon_sym_out,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
    STATE(223), 1,
      sym_parameter_list,
    STATE(203), 2,
      sym_input_parameter,
      sym_output_parameter,
  [2387] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_self,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_retain_statement_repeat1,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(212), 1,
      sym_reference_expression,
  [2412] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_self,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_retain_statement_repeat1,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(212), 1,
      sym_reference_expression,
  [2437] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_in,
    ACTIONS(354), 1,
      anon_sym_out,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
    STATE(209), 1,
      sym_parameter_list,
    STATE(203), 2,
      sym_input_parameter,
      sym_output_parameter,
  [2460] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(367), 1,
      anon_sym_self,
    STATE(82), 1,
      aux_sym_retain_statement_repeat1,
    STATE(113), 1,
      sym_reference_list,
    STATE(120), 1,
      sym_scoped_identifier,
    STATE(212), 1,
      sym_reference_expression,
  [2485] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_in,
    ACTIONS(375), 1,
      anon_sym_out,
    STATE(83), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(370), 2,
      anon_sym_RPAREN,
      anon_sym_src,
    STATE(203), 2,
      sym_input_parameter,
      sym_output_parameter,
  [2506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_in,
    ACTIONS(354), 1,
      anon_sym_out,
    STATE(83), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_RPAREN,
      anon_sym_src,
    STATE(203), 2,
      sym_input_parameter,
      sym_output_parameter,
  [2527] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_binding,
    STATE(204), 1,
      sym_binding_list,
    STATE(221), 1,
      sym_binding_target,
    ACTIONS(380), 2,
      anon_sym_STAR,
      sym_identifier,
  [2547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_binding,
    STATE(189), 1,
      sym_binding_list,
    STATE(221), 1,
      sym_binding_target,
    ACTIONS(380), 2,
      anon_sym_STAR,
      sym_identifier,
  [2567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_scoped_identifier_repeat1,
    ACTIONS(386), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2583] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_binding,
    STATE(182), 1,
      sym_binding_list,
    STATE(221), 1,
      sym_binding_target,
    ACTIONS(380), 2,
      anon_sym_STAR,
      sym_identifier,
  [2603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_in,
    ACTIONS(354), 1,
      anon_sym_out,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
    STATE(164), 1,
      sym_parameter_list,
    STATE(203), 2,
      sym_input_parameter,
      sym_output_parameter,
  [2623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_scoped_identifier_repeat1,
    ACTIONS(392), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [2639] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(21), 1,
      anon_sym_call,
    ACTIONS(394), 1,
      anon_sym_return,
    STATE(107), 1,
      aux_sym_pipeline_definition_repeat1,
    STATE(128), 1,
      sym_call_statement,
    STATE(134), 1,
      sym_return_statement,
  [2661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_binding,
    STATE(201), 1,
      sym_binding_list,
    STATE(221), 1,
      sym_binding_target,
    ACTIONS(380), 2,
      anon_sym_STAR,
      sym_identifier,
  [2681] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(106), 1,
      aux_sym_modifiers_repeat1,
    STATE(177), 1,
      sym_modifiers,
    ACTIONS(400), 3,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_preflight,
  [2699] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(21), 1,
      anon_sym_call,
    ACTIONS(394), 1,
      anon_sym_return,
    STATE(91), 1,
      aux_sym_pipeline_definition_repeat1,
    STATE(128), 1,
      sym_call_statement,
    STATE(132), 1,
      sym_return_statement,
  [2721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_scoped_identifier_repeat1,
    ACTIONS(402), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_in,
    ACTIONS(354), 1,
      anon_sym_out,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
    STATE(186), 1,
      sym_parameter_list,
    STATE(203), 2,
      sym_input_parameter,
      sym_output_parameter,
  [2757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(106), 1,
      aux_sym_modifiers_repeat1,
    STATE(191), 1,
      sym_modifiers,
    ACTIONS(400), 3,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_preflight,
  [2775] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_binding,
    STATE(180), 1,
      sym_binding_list,
    STATE(221), 1,
      sym_binding_target,
    ACTIONS(380), 2,
      anon_sym_STAR,
      sym_identifier,
  [2795] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_binding,
    STATE(176), 1,
      sym_binding_list,
    STATE(221), 1,
      sym_binding_target,
    ACTIONS(380), 2,
      anon_sym_STAR,
      sym_identifier,
  [2815] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_binding,
    STATE(221), 1,
      sym_binding_target,
    STATE(222), 1,
      sym_binding_list,
    ACTIONS(380), 2,
      anon_sym_STAR,
      sym_identifier,
  [2835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LT,
    ACTIONS(412), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [2848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(418), 3,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_preflight,
  [2863] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      sym_pair,
    STATE(184), 1,
      sym_string,
  [2882] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_binding,
    STATE(221), 1,
      sym_binding_target,
    ACTIONS(380), 2,
      anon_sym_STAR,
      sym_identifier,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(386), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(431), 3,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_preflight,
  [2927] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_return,
    ACTIONS(435), 1,
      anon_sym_map,
    ACTIONS(438), 1,
      anon_sym_call,
    STATE(107), 1,
      aux_sym_pipeline_definition_repeat1,
    STATE(128), 1,
      sym_call_statement,
  [2946] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_pair,
    STATE(184), 1,
      sym_string,
  [2965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_binding,
    STATE(221), 1,
      sym_binding_target,
    ACTIONS(380), 2,
      anon_sym_STAR,
      sym_identifier,
  [2982] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_pair,
    STATE(184), 1,
      sym_string,
  [3001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(152), 1,
      sym_binding,
    STATE(221), 1,
      sym_binding_target,
    ACTIONS(380), 2,
      anon_sym_STAR,
      sym_identifier,
  [3015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [3065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [3075] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(167), 1,
      sym_pair,
    STATE(184), 1,
      sym_string,
  [3091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(154), 1,
      sym_source_type,
    ACTIONS(453), 3,
      anon_sym_py,
      anon_sym_comp,
      anon_sym_exec,
  [3103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [3123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_resource_list_repeat1,
  [3146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      anon_sym_as,
    STATE(226), 1,
      sym__call_alias,
  [3159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_array_expression_repeat1,
  [3172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_map_expression_repeat1,
  [3185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 2,
      anon_sym_self,
      sym_identifier,
  [3196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_return,
      anon_sym_map,
      anon_sym_call,
  [3205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_as,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym__call_alias,
  [3218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_resource_list_repeat1,
  [3231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_binding_list_repeat1,
  [3244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_retain,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym_retain_statement,
  [3257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_map_expression_repeat1,
  [3270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_retain,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      sym_retain_statement,
  [3283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_as,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym__call_alias,
  [3296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_array_expression_repeat1,
  [3309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      sym_string,
  [3322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      sym_string,
  [3335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
  [3348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_array_expression_repeat1,
  [3361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_binding_list_repeat1,
  [3374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_binding_list_repeat1,
  [3387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_map_expression_repeat1,
  [3400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOT,
    ACTIONS(526), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      aux_sym_scoped_identifier_repeat1,
  [3413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_resource_list_repeat1,
  [3426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_string,
  [3439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
  [3449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_RBRACE,
      anon_sym_retain,
  [3481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      sym_identifier,
  [3499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      sym_string,
  [3509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_RBRACE,
      anon_sym_retain,
  [3517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(547), 1,
      anon_sym_GT,
  [3551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_string,
  [3561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
    STATE(183), 1,
      sym_scoped_identifier,
  [3571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
      anon_sym_using,
  [3589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_src,
    STATE(168), 1,
      sym_source_declaration,
  [3599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_identifier,
    STATE(115), 1,
      sym_scoped_identifier,
  [3609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_identifier,
    ACTIONS(563), 1,
      anon_sym_default,
  [3619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [3634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COMMA,
  [3641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
  [3648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
  [3655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
  [3662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
  [3669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [3676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
  [3683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
  [3690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
  [3697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_EQ,
  [3704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [3711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [3718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_EQ,
  [3725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [3732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_SEMI,
  [3739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_COLON,
  [3746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
  [3753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [3760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
  [3767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [3781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
  [3788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_identifier,
  [3795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
  [3809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
  [3816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
  [3823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
  [3830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      ts_builtin_sym_end,
  [3837] = 2,
    ACTIONS(621), 1,
      sym__string_inner,
    ACTIONS(623), 1,
      sym_comment,
  [3844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
  [3851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COMMA,
  [3858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
  [3865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COMMA,
  [3872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
  [3879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
  [3886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COMMA,
  [3893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
  [3900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
  [3907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COMMA,
  [3914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
  [3921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_COMMA,
  [3928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_call,
  [3935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_COMMA,
  [3942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
  [3949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_identifier,
  [3956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COMMA,
  [3963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_identifier,
  [3970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
  [3977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
  [3984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
  [3991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
  [3998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_EQ,
  [4005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
  [4012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
  [4019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_EQ,
  [4026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym_identifier,
  [4033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
  [4040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym_identifier,
  [4047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 243,
  [SMALL_STATE(8)] = 272,
  [SMALL_STATE(9)] = 323,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 425,
  [SMALL_STATE(12)] = 476,
  [SMALL_STATE(13)] = 504,
  [SMALL_STATE(14)] = 532,
  [SMALL_STATE(15)] = 560,
  [SMALL_STATE(16)] = 588,
  [SMALL_STATE(17)] = 616,
  [SMALL_STATE(18)] = 644,
  [SMALL_STATE(19)] = 672,
  [SMALL_STATE(20)] = 700,
  [SMALL_STATE(21)] = 728,
  [SMALL_STATE(22)] = 756,
  [SMALL_STATE(23)] = 784,
  [SMALL_STATE(24)] = 832,
  [SMALL_STATE(25)] = 860,
  [SMALL_STATE(26)] = 908,
  [SMALL_STATE(27)] = 936,
  [SMALL_STATE(28)] = 984,
  [SMALL_STATE(29)] = 1015,
  [SMALL_STATE(30)] = 1046,
  [SMALL_STATE(31)] = 1073,
  [SMALL_STATE(32)] = 1118,
  [SMALL_STATE(33)] = 1149,
  [SMALL_STATE(34)] = 1180,
  [SMALL_STATE(35)] = 1211,
  [SMALL_STATE(36)] = 1256,
  [SMALL_STATE(37)] = 1283,
  [SMALL_STATE(38)] = 1328,
  [SMALL_STATE(39)] = 1359,
  [SMALL_STATE(40)] = 1390,
  [SMALL_STATE(41)] = 1421,
  [SMALL_STATE(42)] = 1452,
  [SMALL_STATE(43)] = 1483,
  [SMALL_STATE(44)] = 1510,
  [SMALL_STATE(45)] = 1541,
  [SMALL_STATE(46)] = 1572,
  [SMALL_STATE(47)] = 1597,
  [SMALL_STATE(48)] = 1622,
  [SMALL_STATE(49)] = 1647,
  [SMALL_STATE(50)] = 1672,
  [SMALL_STATE(51)] = 1697,
  [SMALL_STATE(52)] = 1722,
  [SMALL_STATE(53)] = 1747,
  [SMALL_STATE(54)] = 1772,
  [SMALL_STATE(55)] = 1797,
  [SMALL_STATE(56)] = 1822,
  [SMALL_STATE(57)] = 1847,
  [SMALL_STATE(58)] = 1886,
  [SMALL_STATE(59)] = 1911,
  [SMALL_STATE(60)] = 1935,
  [SMALL_STATE(61)] = 1959,
  [SMALL_STATE(62)] = 1983,
  [SMALL_STATE(63)] = 2007,
  [SMALL_STATE(64)] = 2031,
  [SMALL_STATE(65)] = 2055,
  [SMALL_STATE(66)] = 2079,
  [SMALL_STATE(67)] = 2103,
  [SMALL_STATE(68)] = 2140,
  [SMALL_STATE(69)] = 2173,
  [SMALL_STATE(70)] = 2200,
  [SMALL_STATE(71)] = 2226,
  [SMALL_STATE(72)] = 2249,
  [SMALL_STATE(73)] = 2272,
  [SMALL_STATE(74)] = 2292,
  [SMALL_STATE(75)] = 2312,
  [SMALL_STATE(76)] = 2332,
  [SMALL_STATE(77)] = 2349,
  [SMALL_STATE(78)] = 2364,
  [SMALL_STATE(79)] = 2387,
  [SMALL_STATE(80)] = 2412,
  [SMALL_STATE(81)] = 2437,
  [SMALL_STATE(82)] = 2460,
  [SMALL_STATE(83)] = 2485,
  [SMALL_STATE(84)] = 2506,
  [SMALL_STATE(85)] = 2527,
  [SMALL_STATE(86)] = 2547,
  [SMALL_STATE(87)] = 2567,
  [SMALL_STATE(88)] = 2583,
  [SMALL_STATE(89)] = 2603,
  [SMALL_STATE(90)] = 2623,
  [SMALL_STATE(91)] = 2639,
  [SMALL_STATE(92)] = 2661,
  [SMALL_STATE(93)] = 2681,
  [SMALL_STATE(94)] = 2699,
  [SMALL_STATE(95)] = 2721,
  [SMALL_STATE(96)] = 2737,
  [SMALL_STATE(97)] = 2757,
  [SMALL_STATE(98)] = 2775,
  [SMALL_STATE(99)] = 2795,
  [SMALL_STATE(100)] = 2815,
  [SMALL_STATE(101)] = 2835,
  [SMALL_STATE(102)] = 2848,
  [SMALL_STATE(103)] = 2863,
  [SMALL_STATE(104)] = 2882,
  [SMALL_STATE(105)] = 2899,
  [SMALL_STATE(106)] = 2912,
  [SMALL_STATE(107)] = 2927,
  [SMALL_STATE(108)] = 2946,
  [SMALL_STATE(109)] = 2965,
  [SMALL_STATE(110)] = 2982,
  [SMALL_STATE(111)] = 3001,
  [SMALL_STATE(112)] = 3015,
  [SMALL_STATE(113)] = 3025,
  [SMALL_STATE(114)] = 3035,
  [SMALL_STATE(115)] = 3045,
  [SMALL_STATE(116)] = 3055,
  [SMALL_STATE(117)] = 3065,
  [SMALL_STATE(118)] = 3075,
  [SMALL_STATE(119)] = 3091,
  [SMALL_STATE(120)] = 3103,
  [SMALL_STATE(121)] = 3113,
  [SMALL_STATE(122)] = 3123,
  [SMALL_STATE(123)] = 3133,
  [SMALL_STATE(124)] = 3146,
  [SMALL_STATE(125)] = 3159,
  [SMALL_STATE(126)] = 3172,
  [SMALL_STATE(127)] = 3185,
  [SMALL_STATE(128)] = 3196,
  [SMALL_STATE(129)] = 3205,
  [SMALL_STATE(130)] = 3218,
  [SMALL_STATE(131)] = 3231,
  [SMALL_STATE(132)] = 3244,
  [SMALL_STATE(133)] = 3257,
  [SMALL_STATE(134)] = 3270,
  [SMALL_STATE(135)] = 3283,
  [SMALL_STATE(136)] = 3296,
  [SMALL_STATE(137)] = 3309,
  [SMALL_STATE(138)] = 3322,
  [SMALL_STATE(139)] = 3335,
  [SMALL_STATE(140)] = 3348,
  [SMALL_STATE(141)] = 3361,
  [SMALL_STATE(142)] = 3374,
  [SMALL_STATE(143)] = 3387,
  [SMALL_STATE(144)] = 3400,
  [SMALL_STATE(145)] = 3413,
  [SMALL_STATE(146)] = 3426,
  [SMALL_STATE(147)] = 3439,
  [SMALL_STATE(148)] = 3449,
  [SMALL_STATE(149)] = 3457,
  [SMALL_STATE(150)] = 3465,
  [SMALL_STATE(151)] = 3473,
  [SMALL_STATE(152)] = 3481,
  [SMALL_STATE(153)] = 3489,
  [SMALL_STATE(154)] = 3499,
  [SMALL_STATE(155)] = 3509,
  [SMALL_STATE(156)] = 3517,
  [SMALL_STATE(157)] = 3525,
  [SMALL_STATE(158)] = 3533,
  [SMALL_STATE(159)] = 3541,
  [SMALL_STATE(160)] = 3551,
  [SMALL_STATE(161)] = 3561,
  [SMALL_STATE(162)] = 3571,
  [SMALL_STATE(163)] = 3579,
  [SMALL_STATE(164)] = 3589,
  [SMALL_STATE(165)] = 3599,
  [SMALL_STATE(166)] = 3609,
  [SMALL_STATE(167)] = 3619,
  [SMALL_STATE(168)] = 3627,
  [SMALL_STATE(169)] = 3634,
  [SMALL_STATE(170)] = 3641,
  [SMALL_STATE(171)] = 3648,
  [SMALL_STATE(172)] = 3655,
  [SMALL_STATE(173)] = 3662,
  [SMALL_STATE(174)] = 3669,
  [SMALL_STATE(175)] = 3676,
  [SMALL_STATE(176)] = 3683,
  [SMALL_STATE(177)] = 3690,
  [SMALL_STATE(178)] = 3697,
  [SMALL_STATE(179)] = 3704,
  [SMALL_STATE(180)] = 3711,
  [SMALL_STATE(181)] = 3718,
  [SMALL_STATE(182)] = 3725,
  [SMALL_STATE(183)] = 3732,
  [SMALL_STATE(184)] = 3739,
  [SMALL_STATE(185)] = 3746,
  [SMALL_STATE(186)] = 3753,
  [SMALL_STATE(187)] = 3760,
  [SMALL_STATE(188)] = 3767,
  [SMALL_STATE(189)] = 3774,
  [SMALL_STATE(190)] = 3781,
  [SMALL_STATE(191)] = 3788,
  [SMALL_STATE(192)] = 3795,
  [SMALL_STATE(193)] = 3802,
  [SMALL_STATE(194)] = 3809,
  [SMALL_STATE(195)] = 3816,
  [SMALL_STATE(196)] = 3823,
  [SMALL_STATE(197)] = 3830,
  [SMALL_STATE(198)] = 3837,
  [SMALL_STATE(199)] = 3844,
  [SMALL_STATE(200)] = 3851,
  [SMALL_STATE(201)] = 3858,
  [SMALL_STATE(202)] = 3865,
  [SMALL_STATE(203)] = 3872,
  [SMALL_STATE(204)] = 3879,
  [SMALL_STATE(205)] = 3886,
  [SMALL_STATE(206)] = 3893,
  [SMALL_STATE(207)] = 3900,
  [SMALL_STATE(208)] = 3907,
  [SMALL_STATE(209)] = 3914,
  [SMALL_STATE(210)] = 3921,
  [SMALL_STATE(211)] = 3928,
  [SMALL_STATE(212)] = 3935,
  [SMALL_STATE(213)] = 3942,
  [SMALL_STATE(214)] = 3949,
  [SMALL_STATE(215)] = 3956,
  [SMALL_STATE(216)] = 3963,
  [SMALL_STATE(217)] = 3970,
  [SMALL_STATE(218)] = 3977,
  [SMALL_STATE(219)] = 3984,
  [SMALL_STATE(220)] = 3991,
  [SMALL_STATE(221)] = 3998,
  [SMALL_STATE(222)] = 4005,
  [SMALL_STATE(223)] = 4012,
  [SMALL_STATE(224)] = 4019,
  [SMALL_STATE(225)] = 4026,
  [SMALL_STATE(226)] = 4033,
  [SMALL_STATE(227)] = 4040,
  [SMALL_STATE(228)] = 4047,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(228),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_definition, 7, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stage_definition, 7, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_definition, 6, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stage_definition, 6, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stage_definition_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stage_definition_repeat1, 2), SHIFT_REPEAT(163),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stage_definition_repeat1, 2), SHIFT_REPEAT(193),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stage_definition_repeat1, 2), SHIFT_REPEAT(173),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stage_definition_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retain_statement, 4, .production_id = 37),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retain_statement, 4, .production_id = 37),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__val_exp, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__val_exp, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_statement, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retain_statement, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retain_statement, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 5),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 4, .production_id = 34),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_statement, 4, .production_id = 34),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 7, .production_id = 30),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 7, .production_id = 30),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 5, .production_id = 18),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 5, .production_id = 18),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_statement, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_statement, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 6, .production_id = 24),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 6, .production_id = 24),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 6, .production_id = 23),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 6, .production_id = 23),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 6, .production_id = 22),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 6, .production_id = 22),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__struct_field_list, 2), SHIFT_REPEAT(90),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__struct_field_list, 2),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__struct_field_list, 2), SHIFT_REPEAT(117),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__struct_field_list, 2), SHIFT_REPEAT(101),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_statement, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_statement, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 6, .production_id = 26),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 6, .production_id = 26),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 7, .production_id = 28),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 7, .production_id = 28),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 5, .production_id = 20),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 5, .production_id = 20),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 4, .production_id = 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 4, .production_id = 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 7, .production_id = 29),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 7, .production_id = 29),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_statement, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_statement, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 8, .production_id = 33),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 8, .production_id = 33),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 5, .production_id = 19),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 5, .production_id = 19),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 5, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 5, .production_id = 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 7, .production_id = 24),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 7, .production_id = 24),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 7, .production_id = 22),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 7, .production_id = 22),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 6, .production_id = 20),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 6, .production_id = 20),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 7, .production_id = 26),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 7, .production_id = 26),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 9, .production_id = 33),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 9, .production_id = 33),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 7, .production_id = 23),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 7, .production_id = 23),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 8, .production_id = 28),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 8, .production_id = 28),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 6, .production_id = 18),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 6, .production_id = 18),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 8, .production_id = 29),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 8, .production_id = 29),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 6, .production_id = 19),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 6, .production_id = 19),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 8, .production_id = 30),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 8, .production_id = 30),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filetype_declaration, 3, .production_id = 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filetype_declaration, 3, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2, .production_id = 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 11),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 11),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_definition, 8, .production_id = 19),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline_definition, 8, .production_id = 19),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_definition, 10, .production_id = 35),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline_definition, 10, .production_id = 35),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_definition, 9, .production_id = 19),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline_definition, 9, .production_id = 19),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_definition, 9, .production_id = 35),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline_definition, 9, .production_id = 35),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_list, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_list, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scoped_identifier_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scoped_identifier_repeat1, 2), SHIFT_REPEAT(216),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__struct_field_list, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_retain_statement_repeat1, 2, .production_id = 38), SHIFT_REPEAT(87),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retain_statement_repeat1, 2, .production_id = 38),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_retain_statement_repeat1, 2, .production_id = 38), SHIFT_REPEAT(105),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(68),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(57),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_list, 3, .production_id = 9),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(102),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_list, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_definition_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_definition_repeat1, 2), SHIFT_REPEAT(211),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_definition_repeat1, 2), SHIFT_REPEAT(93),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_list, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_list, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_list, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_expression_repeat1, 2), SHIFT_REPEAT(118),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_expression_repeat1, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_retain_statement_repeat1, 2, .production_id = 36),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retain_statement_repeat1, 2, .production_id = 36),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_definition_repeat1, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(23),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_parameter_help, 3, .production_id = 21),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_parameter, 2, .production_id = 12),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_default_parameter, 1, .production_id = 17),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_list_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_list_repeat1, 2), SHIFT_REPEAT(111),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_list, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_list_repeat1, 2),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_list_repeat1, 2), SHIFT_REPEAT(74),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 25),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_value, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, .production_id = 25),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, .production_id = 31),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 8),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_parameter_help_rename, 4, .production_id = 27),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_type, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_type, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_declaration, 4, .production_id = 32),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [619] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 6),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 5),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameter, 2, .production_id = 16),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameter, 2, .production_id = 14),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameter, 2, .production_id = 13),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameter, 2, .production_id = 15),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameter, 2, .production_id = 14),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameter, 2, .production_id = 13),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_alias, 2, .production_id = 10),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_target, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_martian() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
