[
 (pipeline)
 (stage)
 (call)
 (using)
 (split)
 (return)
] @indent

(pipeline "{" @indent)
(pipeline "{" @indent)

(call (bindings) @indent)

[
  ")"
  "}"
  "]"
] @branch

(pipeline ")" @indent_end)
(stage ")" @indent_end)
(call ")" @indent_end)
(using ")" @indent_end)
(split ")" @indent_end)
(return ")" @indent_end)

(stage (input_parameter) @indent)
(stage (input_parameter "," @indent_end))
(stage (output_parameter) @indent)
(stage (output_parameter "," @indent_end))
(stage (source) @indent)
(stage (source "," @indent_end))

(stage (input_parameter) @indent)
(stage (input_parameter "," @indent_end))
(stage (output_parameter) @indent)
(stage (output_parameter "," @indent_end))
(stage (source) @indent)
(stage (source "," @indent_end))

(call (bindings) @indent)
(stage (bindings "," @indent_end))
