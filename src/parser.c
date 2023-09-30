#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 34

enum {
  sym_identifier = 1,
  anon_sym_ATinclude = 2,
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
  anon_sym_using = 16,
  anon_sym_EQ = 17,
  anon_sym_mem_gb = 18,
  anon_sym_vmem_gb = 19,
  anon_sym_threads = 20,
  anon_sym_volatile = 21,
  anon_sym_local = 22,
  anon_sym_disabled = 23,
  anon_sym_preflight = 24,
  anon_sym_special = 25,
  anon_sym_split = 26,
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
  anon_sym_self = 43,
  anon_sym_STAR = 44,
  anon_sym_COLON = 45,
  anon_sym_DOT = 46,
  anon_sym_filetype = 47,
  anon_sym_SEMI = 48,
  sym_filetype = 49,
  sym_true = 50,
  sym_false = 51,
  sym_null = 52,
  anon_sym_DQUOTE = 53,
  sym__string_inner = 54,
  aux_sym__character_escape_token1 = 55,
  sym_float = 56,
  sym_integer = 57,
  sym_comment = 58,
  sym_source_file = 59,
  sym__declaration = 60,
  sym_include_statement = 61,
  sym_struct_declaration = 62,
  sym_struct_parameter_list = 63,
  sym__struct_parameter = 64,
  sym__typed_parameter = 65,
  sym__typed_parameter_help = 66,
  sym_pipeline_declaration = 67,
  sym_return_statement = 68,
  sym_stage_declaration = 69,
  sym_stage_body = 70,
  sym_source_declaration = 71,
  sym_source_type = 72,
  sym__stage_modifiers = 73,
  sym_using_statement = 74,
  sym_using_body = 75,
  sym_using_binding = 76,
  sym_using_binding_resource = 77,
  sym_split_statement = 78,
  sym_retain_statement = 79,
  sym_parameter_list = 80,
  sym_input_parameter = 81,
  sym_output_parameter = 82,
  sym__typed_default_parameter = 83,
  sym__typed_parameter_help_rename = 84,
  sym_parameter_type = 85,
  sym_primitive_type = 86,
  sym_map_type = 87,
  sym_array_type = 88,
  sym_call_statement = 89,
  sym_call_body = 90,
  sym__call_statement_begin = 91,
  sym_binding_statement = 92,
  sym__binding_value = 93,
  sym__binding_target = 94,
  sym_array_binding = 95,
  sym_map_binding = 96,
  sym__map_binding_inner = 97,
  sym_scoped_identifier = 98,
  sym__scoped_identifier_begin = 99,
  sym__scoped_identifier_member = 100,
  sym_filetype_declaration = 101,
  sym__constant = 102,
  sym_string = 103,
  sym__number = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_struct_parameter_list_repeat1 = 106,
  aux_sym_pipeline_declaration_repeat1 = 107,
  aux_sym_return_statement_repeat1 = 108,
  aux_sym_using_body_repeat1 = 109,
  aux_sym_retain_statement_repeat1 = 110,
  aux_sym_parameter_list_repeat1 = 111,
  aux_sym_array_binding_repeat1 = 112,
  aux_sym_map_binding_repeat1 = 113,
  aux_sym_scoped_identifier_repeat1 = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_ATinclude] = "@include",
  [anon_sym_struct] = "struct",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_pipeline] = "pipeline",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_stage] = "stage",
  [anon_sym_src] = "src",
  [anon_sym_py] = "py",
  [anon_sym_comp] = "comp",
  [anon_sym_exec] = "exec",
  [anon_sym_using] = "using",
  [anon_sym_EQ] = "=",
  [anon_sym_mem_gb] = "mem_gb",
  [anon_sym_vmem_gb] = "vmem_gb",
  [anon_sym_threads] = "threads",
  [anon_sym_volatile] = "volatile",
  [anon_sym_local] = "local",
  [anon_sym_disabled] = "disabled",
  [anon_sym_preflight] = "preflight",
  [anon_sym_special] = "special",
  [anon_sym_split] = "split",
  [anon_sym_retain] = "retain",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_string] = "string",
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
  [anon_sym_call] = "call",
  [anon_sym_as] = "as",
  [anon_sym_self] = "self",
  [anon_sym_STAR] = "*",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_filetype] = "filetype",
  [anon_sym_SEMI] = ";",
  [sym_filetype] = "filetype",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_inner] = "_string_inner",
  [aux_sym__character_escape_token1] = "_character_escape_token1",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_include_statement] = "include_statement",
  [sym_struct_declaration] = "struct_declaration",
  [sym_struct_parameter_list] = "struct_parameter_list",
  [sym__struct_parameter] = "_struct_parameter",
  [sym__typed_parameter] = "_typed_parameter",
  [sym__typed_parameter_help] = "_typed_parameter_help",
  [sym_pipeline_declaration] = "pipeline_declaration",
  [sym_return_statement] = "return_statement",
  [sym_stage_declaration] = "stage_declaration",
  [sym_stage_body] = "stage_body",
  [sym_source_declaration] = "source_declaration",
  [sym_source_type] = "source_type",
  [sym__stage_modifiers] = "_stage_modifiers",
  [sym_using_statement] = "using_statement",
  [sym_using_body] = "using_body",
  [sym_using_binding] = "using_binding",
  [sym_using_binding_resource] = "using_binding_resource",
  [sym_split_statement] = "split_statement",
  [sym_retain_statement] = "retain_statement",
  [sym_parameter_list] = "parameter_list",
  [sym_input_parameter] = "input_parameter",
  [sym_output_parameter] = "output_parameter",
  [sym__typed_default_parameter] = "_typed_default_parameter",
  [sym__typed_parameter_help_rename] = "_typed_parameter_help_rename",
  [sym_parameter_type] = "parameter_type",
  [sym_primitive_type] = "primitive_type",
  [sym_map_type] = "map_type",
  [sym_array_type] = "array_type",
  [sym_call_statement] = "call_statement",
  [sym_call_body] = "call_body",
  [sym__call_statement_begin] = "_call_statement_begin",
  [sym_binding_statement] = "binding_statement",
  [sym__binding_value] = "_binding_value",
  [sym__binding_target] = "_binding_target",
  [sym_array_binding] = "array_binding",
  [sym_map_binding] = "map_binding",
  [sym__map_binding_inner] = "_map_binding_inner",
  [sym_scoped_identifier] = "scoped_identifier",
  [sym__scoped_identifier_begin] = "_scoped_identifier_begin",
  [sym__scoped_identifier_member] = "_scoped_identifier_member",
  [sym_filetype_declaration] = "filetype_declaration",
  [sym__constant] = "_constant",
  [sym_string] = "string",
  [sym__number] = "_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_parameter_list_repeat1] = "struct_parameter_list_repeat1",
  [aux_sym_pipeline_declaration_repeat1] = "pipeline_declaration_repeat1",
  [aux_sym_return_statement_repeat1] = "return_statement_repeat1",
  [aux_sym_using_body_repeat1] = "using_body_repeat1",
  [aux_sym_retain_statement_repeat1] = "retain_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_array_binding_repeat1] = "array_binding_repeat1",
  [aux_sym_map_binding_repeat1] = "map_binding_repeat1",
  [aux_sym_scoped_identifier_repeat1] = "scoped_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_pipeline] = anon_sym_pipeline,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_stage] = anon_sym_stage,
  [anon_sym_src] = anon_sym_src,
  [anon_sym_py] = anon_sym_py,
  [anon_sym_comp] = anon_sym_comp,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_mem_gb] = anon_sym_mem_gb,
  [anon_sym_vmem_gb] = anon_sym_vmem_gb,
  [anon_sym_threads] = anon_sym_threads,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_disabled] = anon_sym_disabled,
  [anon_sym_preflight] = anon_sym_preflight,
  [anon_sym_special] = anon_sym_special,
  [anon_sym_split] = anon_sym_split,
  [anon_sym_retain] = anon_sym_retain,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_string] = anon_sym_string,
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
  [anon_sym_call] = anon_sym_call,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_filetype] = anon_sym_filetype,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_filetype] = sym_filetype,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_inner] = sym__string_inner,
  [aux_sym__character_escape_token1] = aux_sym__character_escape_token1,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_include_statement] = sym_include_statement,
  [sym_struct_declaration] = sym_struct_declaration,
  [sym_struct_parameter_list] = sym_struct_parameter_list,
  [sym__struct_parameter] = sym__struct_parameter,
  [sym__typed_parameter] = sym__typed_parameter,
  [sym__typed_parameter_help] = sym__typed_parameter_help,
  [sym_pipeline_declaration] = sym_pipeline_declaration,
  [sym_return_statement] = sym_return_statement,
  [sym_stage_declaration] = sym_stage_declaration,
  [sym_stage_body] = sym_stage_body,
  [sym_source_declaration] = sym_source_declaration,
  [sym_source_type] = sym_source_type,
  [sym__stage_modifiers] = sym__stage_modifiers,
  [sym_using_statement] = sym_using_statement,
  [sym_using_body] = sym_using_body,
  [sym_using_binding] = sym_using_binding,
  [sym_using_binding_resource] = sym_using_binding_resource,
  [sym_split_statement] = sym_split_statement,
  [sym_retain_statement] = sym_retain_statement,
  [sym_parameter_list] = sym_parameter_list,
  [sym_input_parameter] = sym_input_parameter,
  [sym_output_parameter] = sym_output_parameter,
  [sym__typed_default_parameter] = sym__typed_default_parameter,
  [sym__typed_parameter_help_rename] = sym__typed_parameter_help_rename,
  [sym_parameter_type] = sym_parameter_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_map_type] = sym_map_type,
  [sym_array_type] = sym_array_type,
  [sym_call_statement] = sym_call_statement,
  [sym_call_body] = sym_call_body,
  [sym__call_statement_begin] = sym__call_statement_begin,
  [sym_binding_statement] = sym_binding_statement,
  [sym__binding_value] = sym__binding_value,
  [sym__binding_target] = sym__binding_target,
  [sym_array_binding] = sym_array_binding,
  [sym_map_binding] = sym_map_binding,
  [sym__map_binding_inner] = sym__map_binding_inner,
  [sym_scoped_identifier] = sym_scoped_identifier,
  [sym__scoped_identifier_begin] = sym__scoped_identifier_begin,
  [sym__scoped_identifier_member] = sym__scoped_identifier_member,
  [sym_filetype_declaration] = sym_filetype_declaration,
  [sym__constant] = sym__constant,
  [sym_string] = sym_string,
  [sym__number] = sym__number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_parameter_list_repeat1] = aux_sym_struct_parameter_list_repeat1,
  [aux_sym_pipeline_declaration_repeat1] = aux_sym_pipeline_declaration_repeat1,
  [aux_sym_return_statement_repeat1] = aux_sym_return_statement_repeat1,
  [aux_sym_using_body_repeat1] = aux_sym_using_body_repeat1,
  [aux_sym_retain_statement_repeat1] = aux_sym_retain_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_array_binding_repeat1] = aux_sym_array_binding_repeat1,
  [aux_sym_map_binding_repeat1] = aux_sym_map_binding_repeat1,
  [aux_sym_scoped_identifier_repeat1] = aux_sym_scoped_identifier_repeat1,
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
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
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
  [anon_sym_split] = {
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
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
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
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_filetype] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_inner] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__character_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__struct_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__typed_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__typed_parameter_help] = {
    .visible = false,
    .named = true,
  },
  [sym_pipeline_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_stage_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_stage_body] = {
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
  [sym__stage_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_using_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_using_body] = {
    .visible = true,
    .named = true,
  },
  [sym_using_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_using_binding_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_split_statement] = {
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
  [sym__typed_parameter_help_rename] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_map_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_call_body] = {
    .visible = true,
    .named = true,
  },
  [sym__call_statement_begin] = {
    .visible = false,
    .named = true,
  },
  [sym_binding_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__binding_value] = {
    .visible = false,
    .named = true,
  },
  [sym__binding_target] = {
    .visible = false,
    .named = true,
  },
  [sym_array_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_map_binding] = {
    .visible = true,
    .named = true,
  },
  [sym__map_binding_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_scoped_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__scoped_identifier_begin] = {
    .visible = false,
    .named = true,
  },
  [sym__scoped_identifier_member] = {
    .visible = false,
    .named = true,
  },
  [sym_filetype_declaration] = {
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
  [aux_sym_struct_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_return_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_using_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_retain_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scoped_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_body = 2,
  field_help = 3,
  field_include = 4,
  field_key = 5,
  field_name = 6,
  field_output_name = 7,
  field_path = 8,
  field_resource = 9,
  field_source_path = 10,
  field_target = 11,
  field_type = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_help] = "help",
  [field_include] = "include",
  [field_key] = "key",
  [field_name] = "name",
  [field_output_name] = "output_name",
  [field_path] = "path",
  [field_resource] = "resource",
  [field_source_path] = "source_path",
  [field_target] = "target",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 4},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 3},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 8},
  [12] = {.index = 27, .length = 2},
  [13] = {.index = 29, .length = 3},
  [14] = {.index = 32, .length = 1},
  [15] = {.index = 33, .length = 4},
  [16] = {.index = 37, .length = 2},
  [17] = {.index = 39, .length = 2},
  [18] = {.index = 41, .length = 1},
  [19] = {.index = 42, .length = 2},
  [20] = {.index = 44, .length = 1},
  [21] = {.index = 45, .length = 2},
  [22] = {.index = 47, .length = 3},
  [23] = {.index = 50, .length = 2},
  [24] = {.index = 52, .length = 1},
  [25] = {.index = 53, .length = 2},
  [26] = {.index = 55, .length = 2},
  [27] = {.index = 57, .length = 2},
  [28] = {.index = 59, .length = 4},
  [29] = {.index = 63, .length = 1},
  [30] = {.index = 64, .length = 2},
  [31] = {.index = 66, .length = 4},
  [32] = {.index = 70, .length = 4},
  [33] = {.index = 74, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_include, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_alias, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [4] =
    {field_body, 2},
    {field_name, 1},
  [6] =
    {field_name, 2},
  [7] =
    {field_help, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_output_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [11] =
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [13] =
    {field_help, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [16] =
    {field_alias, 3},
    {field_name, 1},
  [18] =
    {field_body, 1},
  [19] =
    {field_help, 0, .inherited = true},
    {field_help, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_output_name, 0, .inherited = true},
    {field_output_name, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [27] =
    {field_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [29] =
    {field_help, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [32] =
    {field_type, 1, .inherited = true},
  [33] =
    {field_help, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_output_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [37] =
    {field_alias, 4},
    {field_name, 2},
  [39] =
    {field_name, 1},
    {field_type, 0},
  [41] =
    {field_type, 0},
  [42] =
    {field_target, 0},
    {field_value, 2},
  [44] =
    {field_name, 0, .inherited = true},
  [45] =
    {field_name, 1, .inherited = true},
    {field_path, 0},
  [47] =
    {field_help, 2},
    {field_name, 1},
    {field_type, 0},
  [50] =
    {field_name, 0},
    {field_name, 1},
  [52] =
    {field_name, 2, .inherited = true},
  [53] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [55] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [57] =
    {field_target, 0},
    {field_value, 3},
  [59] =
    {field_help, 2},
    {field_name, 1},
    {field_output_name, 3},
    {field_type, 0},
  [63] =
    {field_source_path, 2},
  [64] =
    {field_key, 0},
    {field_value, 2},
  [66] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value, 1, .inherited = true},
    {field_value, 2, .inherited = true},
  [70] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [74] =
    {field_resource, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [92] = 43,
  [93] = 93,
  [94] = 39,
  [95] = 95,
  [96] = 37,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 98,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 103,
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
  [184] = 155,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'U') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('[' <= lookahead && lookahead <= '`')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
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
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_filetype);
      if (lookahead == '.') ADVANCE(29);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_filetype);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('[' <= lookahead && lookahead <= '`')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_filetype);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__character_escape_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_py);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_src);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_comp);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(122);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 110:
      if (lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_stage);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_mem_gb);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_retain);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_special);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_threads);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_vmem_gb);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_filetype);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_pipeline);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_preflight);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
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
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
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
  [159] = {.lex_state = 5},
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
  [174] = {.lex_state = 53},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_pipeline] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_stage] = ACTIONS(1),
    [anon_sym_src] = ACTIONS(1),
    [anon_sym_py] = ACTIONS(1),
    [anon_sym_comp] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_mem_gb] = ACTIONS(1),
    [anon_sym_vmem_gb] = ACTIONS(1),
    [anon_sym_threads] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_disabled] = ACTIONS(1),
    [anon_sym_preflight] = ACTIONS(1),
    [anon_sym_special] = ACTIONS(1),
    [anon_sym_split] = ACTIONS(1),
    [anon_sym_retain] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
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
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_filetype] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__character_escape_token1] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(160),
    [sym__declaration] = STATE(13),
    [sym_include_statement] = STATE(13),
    [sym_struct_declaration] = STATE(13),
    [sym_pipeline_declaration] = STATE(13),
    [sym_stage_declaration] = STATE(13),
    [sym_call_statement] = STATE(13),
    [sym__call_statement_begin] = STATE(128),
    [sym_filetype_declaration] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATinclude] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_pipeline] = ACTIONS(11),
    [anon_sym_stage] = ACTIONS(13),
    [anon_sym_map] = ACTIONS(15),
    [anon_sym_call] = ACTIONS(17),
    [anon_sym_filetype] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_struct_parameter_list_repeat1,
    STATE(32), 1,
      sym__typed_parameter_help_rename,
    STATE(33), 1,
      sym__typed_parameter,
    STATE(41), 1,
      sym__typed_parameter_help,
    STATE(42), 1,
      sym__struct_parameter,
    STATE(137), 1,
      sym_parameter_type,
    STATE(148), 1,
      sym_struct_parameter_list,
    ACTIONS(21), 2,
      sym_filetype,
      sym_identifier,
    STATE(89), 3,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
    ACTIONS(25), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [48] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_float,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    ACTIONS(31), 2,
      anon_sym_self,
      sym_identifier,
    ACTIONS(39), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(125), 7,
      sym__binding_value,
      sym_array_binding,
      sym_map_binding,
      sym_scoped_identifier,
      sym__constant,
      sym_string,
      sym__number,
  [89] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_float,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    ACTIONS(31), 2,
      anon_sym_self,
      sym_identifier,
    ACTIONS(39), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(125), 7,
      sym__binding_value,
      sym_array_binding,
      sym_map_binding,
      sym_scoped_identifier,
      sym__constant,
      sym_string,
      sym__number,
  [130] = 12,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      anon_sym_map,
    STATE(5), 1,
      aux_sym_struct_parameter_list_repeat1,
    STATE(32), 1,
      sym__typed_parameter_help_rename,
    STATE(33), 1,
      sym__typed_parameter,
    STATE(41), 1,
      sym__typed_parameter_help,
    STATE(42), 1,
      sym__struct_parameter,
    STATE(137), 1,
      sym_parameter_type,
    ACTIONS(47), 2,
      sym_filetype,
      sym_identifier,
    STATE(89), 3,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
    ACTIONS(52), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [175] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_split,
    ACTIONS(62), 1,
      sym_float,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    ACTIONS(31), 2,
      anon_sym_self,
      sym_identifier,
    ACTIONS(60), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(180), 7,
      sym__binding_value,
      sym_array_binding,
      sym_map_binding,
      sym_scoped_identifier,
      sym__constant,
      sym_string,
      sym__number,
  [216] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    ACTIONS(68), 1,
      sym_float,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    ACTIONS(31), 2,
      anon_sym_self,
      sym_identifier,
    ACTIONS(66), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(118), 7,
      sym__binding_value,
      sym_array_binding,
      sym_map_binding,
      sym_scoped_identifier,
      sym__constant,
      sym_string,
      sym__number,
  [257] = 12,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_struct_parameter_list_repeat1,
    STATE(32), 1,
      sym__typed_parameter_help_rename,
    STATE(33), 1,
      sym__typed_parameter,
    STATE(41), 1,
      sym__typed_parameter_help,
    STATE(42), 1,
      sym__struct_parameter,
    STATE(137), 1,
      sym_parameter_type,
    ACTIONS(21), 2,
      sym_filetype,
      sym_identifier,
    STATE(89), 3,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
    ACTIONS(25), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [302] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_float,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    ACTIONS(31), 2,
      anon_sym_self,
      sym_identifier,
    ACTIONS(39), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(125), 7,
      sym__binding_value,
      sym_array_binding,
      sym_map_binding,
      sym_scoped_identifier,
      sym__constant,
      sym_string,
      sym__number,
  [340] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      sym_float,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    ACTIONS(31), 2,
      anon_sym_self,
      sym_identifier,
    ACTIONS(72), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(126), 7,
      sym__binding_value,
      sym_array_binding,
      sym_map_binding,
      sym_scoped_identifier,
      sym__constant,
      sym_string,
      sym__number,
  [378] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym_float,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    ACTIONS(31), 2,
      anon_sym_self,
      sym_identifier,
    ACTIONS(76), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(164), 7,
      sym__binding_value,
      sym_array_binding,
      sym_map_binding,
      sym_scoped_identifier,
      sym__constant,
      sym_string,
      sym__number,
  [416] = 10,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      sym_comment,
    STATE(84), 1,
      sym__typed_parameter,
    STATE(85), 1,
      sym__typed_parameter_help,
    STATE(86), 1,
      sym__typed_default_parameter,
    STATE(87), 1,
      sym__typed_parameter_help_rename,
    STATE(121), 1,
      sym_parameter_type,
    ACTIONS(21), 2,
      sym_filetype,
      sym_identifier,
    STATE(89), 3,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
    ACTIONS(25), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [455] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATinclude,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_pipeline,
    ACTIONS(13), 1,
      anon_sym_stage,
    ACTIONS(15), 1,
      anon_sym_map,
    ACTIONS(17), 1,
      anon_sym_call,
    ACTIONS(19), 1,
      anon_sym_filetype,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym__call_statement_begin,
    STATE(14), 8,
      sym__declaration,
      sym_include_statement,
      sym_struct_declaration,
      sym_pipeline_declaration,
      sym_stage_declaration,
      sym_call_statement,
      sym_filetype_declaration,
      aux_sym_source_file_repeat1,
  [496] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_ATinclude,
    ACTIONS(87), 1,
      anon_sym_struct,
    ACTIONS(90), 1,
      anon_sym_pipeline,
    ACTIONS(93), 1,
      anon_sym_stage,
    ACTIONS(96), 1,
      anon_sym_map,
    ACTIONS(99), 1,
      anon_sym_call,
    ACTIONS(102), 1,
      anon_sym_filetype,
    STATE(128), 1,
      sym__call_statement_begin,
    STATE(14), 8,
      sym__declaration,
      sym_include_statement,
      sym_struct_declaration,
      sym_pipeline_declaration,
      sym_stage_declaration,
      sym_call_statement,
      sym_filetype_declaration,
      aux_sym_source_file_repeat1,
  [537] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_using,
    ACTIONS(109), 1,
      anon_sym_split,
    ACTIONS(111), 1,
      anon_sym_retain,
    STATE(20), 1,
      sym_split_statement,
    STATE(21), 1,
      sym_retain_statement,
    STATE(25), 1,
      sym_using_statement,
    STATE(54), 1,
      sym__stage_modifiers,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [572] = 8,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      sym_comment,
    STATE(81), 1,
      sym__typed_parameter,
    STATE(82), 1,
      sym__typed_parameter_help,
    STATE(130), 1,
      sym_parameter_type,
    ACTIONS(21), 2,
      sym_filetype,
      sym_identifier,
    STATE(89), 3,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
    ACTIONS(25), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [605] = 6,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      sym_comment,
    STATE(138), 1,
      sym_parameter_type,
    ACTIONS(21), 2,
      sym_filetype,
      sym_identifier,
    STATE(89), 3,
      sym_primitive_type,
      sym_map_type,
      sym_array_type,
    ACTIONS(25), 6,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
  [632] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_self,
    ACTIONS(119), 1,
      sym_float,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    ACTIONS(117), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(150), 4,
      sym_scoped_identifier,
      sym__constant,
      sym_string,
      sym__number,
  [663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 13,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_COMMA,
      anon_sym_pipeline,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_RBRACK,
      anon_sym_call,
      anon_sym_COLON,
      anon_sym_filetype,
      anon_sym_DQUOTE,
  [682] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_using,
    ACTIONS(111), 1,
      anon_sym_retain,
    STATE(34), 1,
      sym_retain_statement,
    STATE(36), 1,
      sym_using_statement,
    ACTIONS(123), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [708] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_using,
    ACTIONS(109), 1,
      anon_sym_split,
    STATE(34), 1,
      sym_split_statement,
    STATE(35), 1,
      sym_using_statement,
    ACTIONS(123), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_using_binding_resource,
    STATE(23), 2,
      sym_using_binding,
      aux_sym_using_body_repeat1,
    ACTIONS(127), 8,
      anon_sym_mem_gb,
      anon_sym_vmem_gb,
      anon_sym_threads,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_disabled,
      anon_sym_preflight,
      anon_sym_special,
  [758] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_using_binding_resource,
    STATE(24), 2,
      sym_using_binding,
      aux_sym_using_body_repeat1,
    ACTIONS(127), 8,
      anon_sym_mem_gb,
      anon_sym_vmem_gb,
      anon_sym_threads,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_disabled,
      anon_sym_preflight,
      anon_sym_special,
  [782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_using_binding_resource,
    STATE(24), 2,
      sym_using_binding,
      aux_sym_using_body_repeat1,
    ACTIONS(133), 8,
      anon_sym_mem_gb,
      anon_sym_vmem_gb,
      anon_sym_threads,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_disabled,
      anon_sym_preflight,
      anon_sym_special,
  [806] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_split,
    ACTIONS(111), 1,
      anon_sym_retain,
    STATE(35), 1,
      sym_retain_statement,
    STATE(36), 1,
      sym_split_statement,
    ACTIONS(123), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_using,
    STATE(46), 1,
      sym_using_statement,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 11,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_RBRACE,
      anon_sym_stage,
      anon_sym_using,
      anon_sym_split,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 11,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_split,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 11,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_split,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 11,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_using,
      anon_sym_split,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 11,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_split,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [938] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(148), 10,
      anon_sym_RPAREN,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
      anon_sym_map,
      sym_filetype,
      sym_identifier,
  [954] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(150), 10,
      anon_sym_RPAREN,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
      anon_sym_map,
      sym_filetype,
      sym_identifier,
  [970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_using,
    STATE(52), 1,
      sym_using_statement,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_split,
    STATE(52), 1,
      sym_split_statement,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_retain,
    STATE(52), 1,
      sym_retain_statement,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1030] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(154), 10,
      anon_sym_RPAREN,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
      anon_sym_map,
      sym_filetype,
      sym_identifier,
  [1046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 10,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_using,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1062] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(158), 10,
      anon_sym_RPAREN,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
      anon_sym_map,
      sym_filetype,
      sym_identifier,
  [1078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 10,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_using,
      anon_sym_retain,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1094] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(162), 10,
      anon_sym_RPAREN,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
      anon_sym_map,
      sym_filetype,
      sym_identifier,
  [1110] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(164), 10,
      anon_sym_RPAREN,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
      anon_sym_map,
      sym_filetype,
      sym_identifier,
  [1126] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(166), 10,
      anon_sym_RPAREN,
      anon_sym_string,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_path,
      anon_sym_file,
      anon_sym_map,
      sym_filetype,
      sym_identifier,
  [1142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 10,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_using,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 9,
      anon_sym_RPAREN,
      anon_sym_mem_gb,
      anon_sym_vmem_gb,
      anon_sym_threads,
      anon_sym_volatile,
      anon_sym_local,
      anon_sym_disabled,
      anon_sym_preflight,
      anon_sym_special,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 9,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_return,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_ATinclude,
      anon_sym_struct,
      anon_sym_pipeline,
      anon_sym_stage,
      anon_sym_map,
      anon_sym_call,
      anon_sym_filetype,
  [1314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_in,
    ACTIONS(196), 1,
      anon_sym_out,
    ACTIONS(192), 2,
      anon_sym_RPAREN,
      anon_sym_src,
    STATE(58), 3,
      sym_input_parameter,
      sym_output_parameter,
      aux_sym_parameter_list_repeat1,
  [1333] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_map,
    ACTIONS(17), 1,
      anon_sym_call,
    ACTIONS(198), 1,
      anon_sym_return,
    STATE(101), 1,
      sym_return_statement,
    STATE(128), 1,
      sym__call_statement_begin,
    STATE(66), 2,
      sym_call_statement,
      aux_sym_pipeline_declaration_repeat1,
  [1356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_in,
    ACTIONS(205), 1,
      anon_sym_out,
    ACTIONS(200), 2,
      anon_sym_RPAREN,
      anon_sym_src,
    STATE(58), 3,
      sym_input_parameter,
      sym_output_parameter,
      aux_sym_parameter_list_repeat1,
  [1375] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_map,
    ACTIONS(17), 1,
      anon_sym_call,
    ACTIONS(198), 1,
      anon_sym_return,
    STATE(107), 1,
      sym_return_statement,
    STATE(128), 1,
      sym__call_statement_begin,
    STATE(57), 2,
      sym_call_statement,
      aux_sym_pipeline_declaration_repeat1,
  [1398] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      anon_sym_self,
    STATE(60), 1,
      aux_sym_retain_statement_repeat1,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    STATE(169), 1,
      sym_scoped_identifier,
  [1420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_in,
    ACTIONS(196), 1,
      anon_sym_out,
    STATE(135), 1,
      sym_parameter_list,
    STATE(56), 3,
      sym_input_parameter,
      sym_output_parameter,
      aux_sym_parameter_list_repeat1,
  [1438] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym__binding_target,
    ACTIONS(216), 2,
      anon_sym_STAR,
      sym_identifier,
    STATE(69), 2,
      sym_binding_statement,
      aux_sym_return_statement_repeat1,
  [1456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_in,
    ACTIONS(196), 1,
      anon_sym_out,
    STATE(145), 1,
      sym_parameter_list,
    STATE(56), 3,
      sym_input_parameter,
      sym_output_parameter,
      aux_sym_parameter_list_repeat1,
  [1474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_scoped_identifier_repeat1,
    STATE(83), 1,
      sym__scoped_identifier_member,
    ACTIONS(220), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym__binding_target,
    ACTIONS(216), 2,
      anon_sym_STAR,
      sym_identifier,
    STATE(69), 2,
      sym_binding_statement,
      aux_sym_return_statement_repeat1,
  [1510] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(228), 1,
      anon_sym_map,
    ACTIONS(231), 1,
      anon_sym_call,
    STATE(128), 1,
      sym__call_statement_begin,
    STATE(66), 2,
      sym_call_statement,
      aux_sym_pipeline_declaration_repeat1,
  [1530] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_self,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_retain_statement_repeat1,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    STATE(169), 1,
      sym_scoped_identifier,
  [1552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_scoped_identifier_repeat1,
    STATE(83), 1,
      sym__scoped_identifier_member,
    ACTIONS(238), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1570] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym__binding_target,
    ACTIONS(243), 2,
      anon_sym_STAR,
      sym_identifier,
    STATE(69), 2,
      sym_binding_statement,
      aux_sym_return_statement_repeat1,
  [1588] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym__binding_target,
    ACTIONS(216), 2,
      anon_sym_STAR,
      sym_identifier,
    STATE(62), 2,
      sym_binding_statement,
      aux_sym_return_statement_repeat1,
  [1606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym__binding_target,
    ACTIONS(216), 2,
      anon_sym_STAR,
      sym_identifier,
    STATE(65), 2,
      sym_binding_statement,
      aux_sym_return_statement_repeat1,
  [1624] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_in,
    ACTIONS(196), 1,
      anon_sym_out,
    STATE(173), 1,
      sym_parameter_list,
    STATE(56), 3,
      sym_input_parameter,
      sym_output_parameter,
      aux_sym_parameter_list_repeat1,
  [1642] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym__map_binding_inner,
    STATE(165), 1,
      sym_string,
  [1661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_self,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_retain_statement_repeat1,
    STATE(105), 1,
      sym__scoped_identifier_begin,
    STATE(169), 1,
      sym_scoped_identifier,
  [1680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      sym__map_binding_inner,
    STATE(165), 1,
      sym_string,
  [1699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LT,
    ACTIONS(258), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [1712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym__map_binding_inner,
    STATE(165), 1,
      sym_string,
  [1731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [1741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [1751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [1761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [1771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [1781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [1791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [1801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [1821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [1831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [1841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [1851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(136), 1,
      sym_source_type,
    ACTIONS(288), 3,
      anon_sym_py,
      anon_sym_comp,
      anon_sym_exec,
  [1863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    STATE(127), 1,
      sym__map_binding_inner,
    STATE(165), 1,
      sym_string,
  [1879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [1889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [1899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [1909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOT,
    ACTIONS(296), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      anon_sym_RPAREN,
      anon_sym_src,
      anon_sym_in,
      anon_sym_out,
  [1931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(302), 2,
      anon_sym_self,
      sym_identifier,
  [1942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      sym_string,
  [1955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_retain,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_retain_statement,
  [1986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      sym_string,
  [1999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      sym_string,
  [2012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      sym_string,
  [2025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_scoped_identifier_repeat1,
    STATE(83), 1,
      sym__scoped_identifier_member,
  [2038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_identifier,
  [2047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_retain,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(154), 1,
      sym_retain_statement,
  [2060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_array_binding_repeat1,
  [2082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_map_binding_repeat1,
  [2095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      sym_string,
  [2108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_array_binding_repeat1,
  [2121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_map_binding_repeat1,
  [2152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_map_binding_repeat1,
  [2165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_array_binding_repeat1,
  [2187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_identifier,
  [2196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_LBRACK,
  [2218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_RBRACE,
      anon_sym_retain,
  [2244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_call_body,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_using_body,
  [2288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      sym_identifier,
  [2298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_as,
  [2308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_COMMA,
  [2318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_COMMA,
  [2328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_stage_body,
  [2338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_src,
    STATE(183), 1,
      sym_source_declaration,
  [2348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_string,
  [2358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LBRACK,
    ACTIONS(394), 1,
      sym_identifier,
  [2368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_GT,
  [2378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_RBRACE,
      anon_sym_retain,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_as,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_string,
  [2406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
  [2413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_identifier,
  [2420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_identifier,
  [2427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [2434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_call,
  [2441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
  [2448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
  [2455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COMMA,
  [2462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
  [2469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
  [2476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
  [2483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
  [2490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
  [2497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_COMMA,
  [2504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_EQ,
  [2511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
  [2518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
  [2525] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_filetype,
  [2532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
  [2539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_identifier,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_identifier,
  [2553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_identifier,
  [2560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_COMMA,
  [2567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
  [2574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
  [2581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
  [2588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_identifier,
  [2595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
  [2602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
  [2609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_SEMI,
  [2616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
  [2623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
  [2630] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym__string_inner,
  [2637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
  [2644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_identifier,
  [2651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_EQ,
  [2658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_EQ,
  [2665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
  [2672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_COMMA,
  [2679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
  [2686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
  [2693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [2700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 175,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 257,
  [SMALL_STATE(9)] = 302,
  [SMALL_STATE(10)] = 340,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 416,
  [SMALL_STATE(13)] = 455,
  [SMALL_STATE(14)] = 496,
  [SMALL_STATE(15)] = 537,
  [SMALL_STATE(16)] = 572,
  [SMALL_STATE(17)] = 605,
  [SMALL_STATE(18)] = 632,
  [SMALL_STATE(19)] = 663,
  [SMALL_STATE(20)] = 682,
  [SMALL_STATE(21)] = 708,
  [SMALL_STATE(22)] = 734,
  [SMALL_STATE(23)] = 758,
  [SMALL_STATE(24)] = 782,
  [SMALL_STATE(25)] = 806,
  [SMALL_STATE(26)] = 832,
  [SMALL_STATE(27)] = 853,
  [SMALL_STATE(28)] = 870,
  [SMALL_STATE(29)] = 887,
  [SMALL_STATE(30)] = 904,
  [SMALL_STATE(31)] = 921,
  [SMALL_STATE(32)] = 938,
  [SMALL_STATE(33)] = 954,
  [SMALL_STATE(34)] = 970,
  [SMALL_STATE(35)] = 990,
  [SMALL_STATE(36)] = 1010,
  [SMALL_STATE(37)] = 1030,
  [SMALL_STATE(38)] = 1046,
  [SMALL_STATE(39)] = 1062,
  [SMALL_STATE(40)] = 1078,
  [SMALL_STATE(41)] = 1094,
  [SMALL_STATE(42)] = 1110,
  [SMALL_STATE(43)] = 1126,
  [SMALL_STATE(44)] = 1142,
  [SMALL_STATE(45)] = 1158,
  [SMALL_STATE(46)] = 1173,
  [SMALL_STATE(47)] = 1188,
  [SMALL_STATE(48)] = 1202,
  [SMALL_STATE(49)] = 1216,
  [SMALL_STATE(50)] = 1230,
  [SMALL_STATE(51)] = 1244,
  [SMALL_STATE(52)] = 1258,
  [SMALL_STATE(53)] = 1272,
  [SMALL_STATE(54)] = 1286,
  [SMALL_STATE(55)] = 1300,
  [SMALL_STATE(56)] = 1314,
  [SMALL_STATE(57)] = 1333,
  [SMALL_STATE(58)] = 1356,
  [SMALL_STATE(59)] = 1375,
  [SMALL_STATE(60)] = 1398,
  [SMALL_STATE(61)] = 1420,
  [SMALL_STATE(62)] = 1438,
  [SMALL_STATE(63)] = 1456,
  [SMALL_STATE(64)] = 1474,
  [SMALL_STATE(65)] = 1492,
  [SMALL_STATE(66)] = 1510,
  [SMALL_STATE(67)] = 1530,
  [SMALL_STATE(68)] = 1552,
  [SMALL_STATE(69)] = 1570,
  [SMALL_STATE(70)] = 1588,
  [SMALL_STATE(71)] = 1606,
  [SMALL_STATE(72)] = 1624,
  [SMALL_STATE(73)] = 1642,
  [SMALL_STATE(74)] = 1661,
  [SMALL_STATE(75)] = 1680,
  [SMALL_STATE(76)] = 1699,
  [SMALL_STATE(77)] = 1712,
  [SMALL_STATE(78)] = 1731,
  [SMALL_STATE(79)] = 1741,
  [SMALL_STATE(80)] = 1751,
  [SMALL_STATE(81)] = 1761,
  [SMALL_STATE(82)] = 1771,
  [SMALL_STATE(83)] = 1781,
  [SMALL_STATE(84)] = 1791,
  [SMALL_STATE(85)] = 1801,
  [SMALL_STATE(86)] = 1811,
  [SMALL_STATE(87)] = 1821,
  [SMALL_STATE(88)] = 1831,
  [SMALL_STATE(89)] = 1841,
  [SMALL_STATE(90)] = 1851,
  [SMALL_STATE(91)] = 1863,
  [SMALL_STATE(92)] = 1879,
  [SMALL_STATE(93)] = 1889,
  [SMALL_STATE(94)] = 1899,
  [SMALL_STATE(95)] = 1909,
  [SMALL_STATE(96)] = 1921,
  [SMALL_STATE(97)] = 1931,
  [SMALL_STATE(98)] = 1942,
  [SMALL_STATE(99)] = 1955,
  [SMALL_STATE(100)] = 1964,
  [SMALL_STATE(101)] = 1973,
  [SMALL_STATE(102)] = 1986,
  [SMALL_STATE(103)] = 1999,
  [SMALL_STATE(104)] = 2012,
  [SMALL_STATE(105)] = 2025,
  [SMALL_STATE(106)] = 2038,
  [SMALL_STATE(107)] = 2047,
  [SMALL_STATE(108)] = 2060,
  [SMALL_STATE(109)] = 2069,
  [SMALL_STATE(110)] = 2082,
  [SMALL_STATE(111)] = 2095,
  [SMALL_STATE(112)] = 2108,
  [SMALL_STATE(113)] = 2121,
  [SMALL_STATE(114)] = 2130,
  [SMALL_STATE(115)] = 2139,
  [SMALL_STATE(116)] = 2152,
  [SMALL_STATE(117)] = 2165,
  [SMALL_STATE(118)] = 2174,
  [SMALL_STATE(119)] = 2187,
  [SMALL_STATE(120)] = 2196,
  [SMALL_STATE(121)] = 2205,
  [SMALL_STATE(122)] = 2218,
  [SMALL_STATE(123)] = 2227,
  [SMALL_STATE(124)] = 2236,
  [SMALL_STATE(125)] = 2244,
  [SMALL_STATE(126)] = 2252,
  [SMALL_STATE(127)] = 2260,
  [SMALL_STATE(128)] = 2268,
  [SMALL_STATE(129)] = 2278,
  [SMALL_STATE(130)] = 2288,
  [SMALL_STATE(131)] = 2298,
  [SMALL_STATE(132)] = 2308,
  [SMALL_STATE(133)] = 2318,
  [SMALL_STATE(134)] = 2328,
  [SMALL_STATE(135)] = 2338,
  [SMALL_STATE(136)] = 2348,
  [SMALL_STATE(137)] = 2358,
  [SMALL_STATE(138)] = 2368,
  [SMALL_STATE(139)] = 2378,
  [SMALL_STATE(140)] = 2386,
  [SMALL_STATE(141)] = 2396,
  [SMALL_STATE(142)] = 2406,
  [SMALL_STATE(143)] = 2413,
  [SMALL_STATE(144)] = 2420,
  [SMALL_STATE(145)] = 2427,
  [SMALL_STATE(146)] = 2434,
  [SMALL_STATE(147)] = 2441,
  [SMALL_STATE(148)] = 2448,
  [SMALL_STATE(149)] = 2455,
  [SMALL_STATE(150)] = 2462,
  [SMALL_STATE(151)] = 2469,
  [SMALL_STATE(152)] = 2476,
  [SMALL_STATE(153)] = 2483,
  [SMALL_STATE(154)] = 2490,
  [SMALL_STATE(155)] = 2497,
  [SMALL_STATE(156)] = 2504,
  [SMALL_STATE(157)] = 2511,
  [SMALL_STATE(158)] = 2518,
  [SMALL_STATE(159)] = 2525,
  [SMALL_STATE(160)] = 2532,
  [SMALL_STATE(161)] = 2539,
  [SMALL_STATE(162)] = 2546,
  [SMALL_STATE(163)] = 2553,
  [SMALL_STATE(164)] = 2560,
  [SMALL_STATE(165)] = 2567,
  [SMALL_STATE(166)] = 2574,
  [SMALL_STATE(167)] = 2581,
  [SMALL_STATE(168)] = 2588,
  [SMALL_STATE(169)] = 2595,
  [SMALL_STATE(170)] = 2602,
  [SMALL_STATE(171)] = 2609,
  [SMALL_STATE(172)] = 2616,
  [SMALL_STATE(173)] = 2623,
  [SMALL_STATE(174)] = 2630,
  [SMALL_STATE(175)] = 2637,
  [SMALL_STATE(176)] = 2644,
  [SMALL_STATE(177)] = 2651,
  [SMALL_STATE(178)] = 2658,
  [SMALL_STATE(179)] = 2665,
  [SMALL_STATE(180)] = 2672,
  [SMALL_STATE(181)] = 2679,
  [SMALL_STATE(182)] = 2686,
  [SMALL_STATE(183)] = 2693,
  [SMALL_STATE(184)] = 2700,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_parameter_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(89),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_parameter_list_repeat1, 2, .production_id = 11),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_parameter_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(88),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_parameter_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(76),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_parameter_list, 1, .production_id = 6),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_declaration, 3, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stage_modifiers, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_using_body_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_using_body_repeat1, 2), SHIFT_REPEAT(178),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retain_statement, 4, .production_id = 24),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_body, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 2, .production_id = 10),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_body, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_body, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__struct_parameter, 1, .production_id = 6),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__struct_parameter, 1, .production_id = 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stage_modifiers, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typed_parameter, 3, .production_id = 17),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_body, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typed_parameter_help, 4, .production_id = 22),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_statement, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__struct_parameter, 1, .production_id = 8),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_parameter_list_repeat1, 1, .production_id = 6),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typed_parameter_help_rename, 5, .production_id = 28),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_body, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_binding, 4, .production_id = 33),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_declaration, 9, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filetype_declaration, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_declaration, 10, .production_id = 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stage_modifiers, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_declaration, 8, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_declaration, 4, .production_id = 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(16),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(12),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_retain_statement_repeat1, 2, .production_id = 25), SHIFT_REPEAT(132),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retain_statement_repeat1, 2, .production_id = 25),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_retain_statement_repeat1, 2, .production_id = 25), SHIFT_REPEAT(105),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 21),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_declaration_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_declaration_repeat1, 2), SHIFT_REPEAT(146),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_declaration_repeat1, 2), SHIFT_REPEAT(143),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scoped_identifier_repeat1, 2, .production_id = 25),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scoped_identifier_repeat1, 2, .production_id = 25), SHIFT_REPEAT(163),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_return_statement_repeat1, 2), SHIFT_REPEAT(156),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_return_statement_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scoped_identifier_member, 2, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameter, 2, .production_id = 12),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameter, 2, .production_id = 13),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scoped_identifier_repeat1, 1, .production_id = 20),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameter, 2, .production_id = 12),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameter, 2, .production_id = 13),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameter, 2, .production_id = 14),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameter, 2, .production_id = 15),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_parameter_help_rename, 5, .production_id = 28),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_default_parameter, 2, .production_id = 18),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_parameter_help, 4, .production_id = 22),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binding_value, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scoped_identifier_begin, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_parameter, 3, .production_id = 17),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_retain_statement_repeat1, 2, .production_id = 23),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retain_statement_repeat1, 2, .production_id = 23),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_binding, 3, .production_id = 26),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_binding, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 5, .production_id = 27),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_binding, 5, .production_id = 31),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_binding_repeat1, 2), SHIFT_REPEAT(9),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_binding_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_binding, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_binding, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_binding_repeat1, 2, .production_id = 32), SHIFT_REPEAT(91),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_binding_repeat1, 2, .production_id = 32),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_binding, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 4, .production_id = 19),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_binding, 4, .production_id = 31),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_binding, 4, .production_id = 26),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_binding, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__map_binding_inner, 3, .production_id = 30),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_binding_repeat1, 2, .production_id = 26),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_statement_begin, 3, .production_id = 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_statement_begin, 2, .production_id = 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_declaration, 4, .production_id = 29),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [434] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_statement_begin, 4, .production_id = 9),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_type, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_binding_resource, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_statement_begin, 5, .production_id = 16),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_martian(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
