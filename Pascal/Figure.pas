Program Figure;

Procedure PrintSpaces(count: integer);
Var
	i: integer;
Begin
	for i := 1 to count do
		write(' ');
End;




Var
	a, b: integer;
Begin
	for a := 1 to 9 do
	Begin
	for b := 1 to a - 1 do
		write(' ');
	writeln('*');
	End;
End.

