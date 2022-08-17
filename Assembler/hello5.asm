%include "stud_io.inc"
global start

section .text
start:	mov	eax, 5
again:	PRINT	"Hello"
	PUTCHAR	10
	dec	eax
	jnz	again
	FINISH

