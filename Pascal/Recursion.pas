Program Recursion;

Procedure Recursion(x: integer);
Begin
	if x > 0 then
	Begin
		writeln(x, '<-');
		Recursion(x div 10);
		write(x mod 10, ' ');
	End;
End;

Var
	x: integer;
Begin
	writeln('Please type a number');
	read(x);
	Recursion(x);
End.

