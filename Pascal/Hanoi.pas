Program Hanoi;

Procedure Solve(source, target, transit, x: integer);
Begin
	if x = 0 then
		exit;
	Solve(source, transit, target, x - 1);
	writeln(x, ': ', source, ' -> ', target);
	Solve(transit, target, source, x - 1);
End;

Var
	x: integer;
Begin
	read(x);
	if (x < 1) then
	Begin
		writeln(ErrOutput, 'Invalid taken count');
		halt(1);
	End;
	Solve(1, 3, 2, x);
End.
