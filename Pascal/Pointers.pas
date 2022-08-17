Program Pointers;

Var
	a: string;
	b: ^string;
Begin
	b := @a;
	b^ := 'Hello, world!';
	writeln(a);
	b := nil;
End.
