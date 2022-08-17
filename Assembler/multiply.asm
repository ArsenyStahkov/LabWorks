%include "stud_io.inc"
global start

section .text
start:	mov	ebx, 4	;add number 4 in EBX
	mov	eax, 6	;add number 6 in EAX
	mul 	ebx	;multiply 6 and 4
	FINISH
