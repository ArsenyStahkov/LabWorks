global start

start:
%assign i 1
%assign j 1
%rep 100000
	%if j > 100000
	%exitrep
%endif

	dd j

	%assign k i + j
	%assign i j
	%assign j k
%endrep

