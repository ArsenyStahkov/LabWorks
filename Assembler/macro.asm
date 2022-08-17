global start

start:
%macro pcall1 2		; 2 is number of macro parameters (push)
	push %2		; add a value into the stack
	call %1		; transfer control to the first parameter
	add esp, 4	; sum of 'esp' and 4 for the last value
%endmacro

%macro pcall2 3
	push %3
	push %2
	call %1
	add esp, 8
%endmacro

%macro pcall3 4
	push %4
	push %3
	push %2
	call %1
	add esp, 12
%endmacro

%macro pcall0 1
	call %1
%endmacro

%define arg1 	ebp + 8		; add arguments for procedure
%define arg2 	ebp + 12
%define arg3 	ebp + 16
%define local1 	ebp - 4		; add local variables for procedure
%define local2 	ebp - 8
%define local3 	ebp - 12

%define arg(n) 	 ebp + (4 * n) + 4	; more comfortable variant of adding
%define local(n) ebp - (4 * n)
