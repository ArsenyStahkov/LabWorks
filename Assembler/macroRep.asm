global start

start:
%assign n 50
%rep 100
	db n
	%assign n n + 1
%endrep	

