global start

start:
%macro pcall 1-*		; create a procedure with number parameters more than zero
	%rep %0 - 1		; create a cycle with parameters without the first
	%rotate -1		; the last value gets the first
	push dword %1		; add double word in the first parameter
	%endrep
%rotate -1			; the last value is the first last time
	call %1
	add esp, (%0 - 1) * 4
%endmacro
