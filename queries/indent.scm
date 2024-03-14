[
  (stage_definition)
  (struct_definition)
  (pipeline_definition)

  (call_statement)
  (using_statement)
  (return_statement)
  (split_statement)
] @indent.begin

(return_statement
  (binding_list) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")"))

((parameter_list) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")")
  (#set! indent.avoid_last_matching_next 1))

((binding_list) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")")
  (#set! indent.avoid_last_matching_next 1))

((array_expression) @indent.align
  (#set! indent.open_delimiter "[")
  (#set! indent.close_delimiter "]")
  (#set! indent.avoid_last_matching_next 1))

((map_expression) @indent.align
  (#set! indent.open_delimiter "{")
  (#set! indent.close_delimiter "}")
  (#set! indent.avoid_last_matching_next 1))

(stage_definition
  (source_declaration)
  ")" @indent.end)

(struct_definition
  ")" @indent.end)

(pipeline_definition
  ")" @indent.end)

(pipeline_definition
  "}" @indent.end)

(retain_statement
  ")" @indent.end)

(using_statement
  ")" @indent.end)

(return_statement
  ")" @indent.end)

(split_statement
  ")" @indent.end)

[
  ")"
  "]"
  "}"
] @indent.branch
