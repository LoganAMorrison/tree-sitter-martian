; Variables
(identifier) @variable

;; Identifier naming conventions
; ((identifier) @constant)

; Stage, Pipeline, Call
(stage name: (identifier) @function.call)
(pipeline name: (identifier) @function.call)
(call name: (identifier) @function.call)



[
 "stage"
 "pipeline"
 "call"
] @keyword.function

[
 "split"
 "using"
] @keyword

[
 "in"
 "out"
 "src"
] @label

(type) @type.builtin
(type (identifier) @type)


[
 "return"
] @keyword.return


; Includes
(includes (include (string) @import))

(integer) @number
(float) @float

(comment) @comment
(string) @string
