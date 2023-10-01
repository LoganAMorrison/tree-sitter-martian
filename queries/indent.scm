[
  (stage_body)
  (resources)
] @indent.begin


((call_stm) @indent.begin
 (#set! indent.open_delimiter "(")
 (#set! indent.close_delimiter ")"))

((struct_declaration) @indent.align
 (#set! indent.open_delimiter "(")
 (#set! indent.close_delimiter ")"))

(resources ")" @indent.end)
(stage_declaration ")" @indent.end)

[
  ")"
  "]"
  "}"
] @indent.branch
