; The below table describes a standard vocabulary for kinds and roles during
; the tagging process. New applications may extend (or only recognize a subset
; of) these capture names, but it is desirable to standardize on the names
; below.
;
; Category                 | Tag
; -------------------------+---------------------------
; Class definitions        | @definition.class
; Function definitions     | @definition.function
; Interface definitions    | @definition.interface
; Method definitions       | @definition.method
; Module definitions       | @definition.module
; Function/method calls    | @reference.call
; Class reference          | @reference.class
; Interface implementation | @reference.implementation



(struct_definition
  name: (identifier) @name) @definition.class

(stage_definition
  name: (identifier) @name) @definition.function

(pipeline_definition
  name: (identifier) @name) @definition.function

(call_statement
  name: (identifier) @name) @reference.call
