;@comment
;@debug
;@error for error `ERROR` nodes.
;@none to disable completely the highlight
;@preproc
;@punctuation.delimiter for `;` `.` `,`
;@punctuation.bracket for `()` or `{}`
;@punctuation.special for symbols with special meaning like `{}` in string interpolation.

;@constant
;@constant.builtin
;@constant.macro
;@string
;@string.regex
;@string.escape
;@string.special
;@character
;@character.special
;@number
;@boolean
;@float

;@function
;@function.builtin
;@function.call
;@function.macro
;@parameter
;@method
;@method.call
;@field
;@property
;@constructor

;@conditional (e.g. `if`, `else`)
;@repeat (e.g. `for`, `while`)
;@label for C/Lua-like labels
;@keyword
;@keyword.function (keyword to define a function, e.g. `func` in Go, `def` in Python)
;@keyword.operator (for operators that are English words, e.g. `and`, `or`)
;@keyword.return
;@operator (for symbolic operators, e.g. `+`, `*`)
;@exception (e.g. `throw`, `catch`)
;@include keywords for including modules (e.g. import/from in Python)
;@storageclass
;@type
;@type.builtin
;@type.definition
;@type.qualifier
;@namespace for identifiers referring to namespaces
;@symbol for identifiers referring to symbols
;@attribute for e.g. Python decorators

;@variable
;@variable.builtin

; Includes
;;;; "@include" @include


; Variables
(identifier) @variable

;; Identifier naming conventions
; ((identifier) @constant)

; Stage, Pipeline, Call
;;;(stage_expression 
;;;  name: (identifier) @function.call)
;;;(pipeline_expression 
;;;  name: (identifier) @function.call)
;;;(call_expression
;;;  name: (identifier) @function.call)
;;;(struct_expression 
;;;  name: (identifier) @function.call)

; Bindings
(binding_statement 
  target: (identifier) @variable)

(input_parameter
  type: (parameter_type) @type.builtin
  name: (identifier) @variable)
(output_parameter
  type: (parameter_type) @type.builtin)
(output_parameter
  (identifier) @variable)


(using_statement
  (using_binding 
    resource: (using_binding_resource) @variable.builtin))

(using_binding
  (_)
  value: (identifier) @variable.builtin
  (#match? @variable.builtin "^strict$"))

(binding_statement
  target: (identifier) @parameter)

(call_statement 
  "map" @keyword.function)

(scoped_identifier name: (identifier) @property)

[
  "self"
  "special"
  "threads"
  "volatile"
  "mem_gb"
  "vmem_gb"
  "local"
  "disabled"
  "*"
] @variable.builtin

[
 "stage"
 "pipeline"
 "call"
] @keyword.function

[
 "split"
 "using"
 "filetype"
 "struct"
 "in"
 "out"
 "src"
 "@include"
] @keyword

;; [
;;  "in"
;;  "out"
;;  "src"
;; ] @keyword.operator

[
 "return"
] @keyword.return


; Types
[
 "py"
 "comp"
 "exec"
 (parameter_type)
] @type.builtin

(parameter_type (identifier) @type)

; Numbers, bools, etc.
[
 (true)
 (false)
 (null)
] @constant.builtin

(integer) @number
(float) @float
(string) @string
(comment) @comment

; Punctuation
[
  "(" 
  ")" 
  "[" 
  "]" 
  "{" 
  "}"
]  @punctuation.bracket

[
  "," 
  "." 
  ";"
] @punctuation.delimiter

[
  "="
] @operator
