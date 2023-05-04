[
 (pipeline_declaration)
 (stage_declaration)
 (call_statement)
 (using_statement)
 (split_statement)
 (return_statement)
] @indent

(pipeline_declaration "{" @indent)
(pipeline_declaration "{" @indent)

(call_statement (binding_statement) @indent)

[
  ")"
  "}"
  "]"
] @branch

(pipeline_declaration ")" @indent_end)
(stage_declaration ")" @indent_end)
(call_statement ")" @indent_end)
(using_statement ")" @indent_end)
(split_statement ")" @indent_end)
(return_statement ")" @indent_end)

;(stage_declaration (input_parameter) @indent)
;(stage_declaration (input_parameter "," @indent_end))
;(stage_declaration (output_parameter) @indent)
;(stage_declaration (output_parameter "," @indent_end))
;(stage_declaration (source_declaration) @indent)
;(stage_declaration (source_declaration "," @indent_end))

