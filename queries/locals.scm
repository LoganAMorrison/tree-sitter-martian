(source_file) @scope

(struct_declaration
  (struct_parameter_list name: (identifier) @definition.field))

; Includes
(include_statement
  include: (string) @definition.import)
