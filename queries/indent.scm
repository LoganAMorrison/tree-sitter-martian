[
  (stage_body)
  (using_body)
] @indent.begin


((call_statement) @indent.begin
 (#set! indent.open_delimiter "(")
 (#set! indent.close_delimiter ")"))

((struct_declaration) @indent.align
 (#set! indent.open_delimiter "(")
 (#set! indent.close_delimiter ")"))

(using_body ")" @indent.end)
(stage_body ")" @indent.end)

[
  ")"
  "]"
  "}"
] @indent.branch
