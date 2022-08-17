%include "stud_io.inc"
section .bss
array 	resb 256
global	start

section .text
start:	mov 	ecx, 256
	mov 	edi, array
	mov 	al, '@'
repeat:	mov 	[edi], al
	inc 	edi
	dec 	ecx
	PRINT	'@'
	jnz 	repeat
	FINISH

