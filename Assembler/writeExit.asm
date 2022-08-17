global start

section .data
msg	db "Hello world", 10
msg_len	equ $ - msg		; get length of string

section .text
start:
push	dword 	msg_len		; add values into stack
push	dword 	msg
push	dword 	1		; standart output
mov	eax, 	4		; write
push	eax
int	80h			; system interrupt
add	esp,	16		; four double words

push	dword	0		; code "success"
mov	eax,	1		; call _exit
push	eax
int	80h
