Program Procedur;

Procedure Additional(count: integer);
Var
	i: integer;
Begin
	for i := 1 to count do
		write('* ');
	writeln;
End;

Var
	a: integer;
Begin
	repeat
	writeln('Please, type a number');
	readln(a);
	until a > 0;
	Additional(a);
End.
