%include "stud_io.inc"
section .bss
buf resb 1024
global start

section .text
start:	xor al, al
	mov edi, buf
	mov ecx, 1024
	cld
lp:	stosb
	loop lp
