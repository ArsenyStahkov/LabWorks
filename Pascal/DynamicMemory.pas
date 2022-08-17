Program DynamicMemory;

Var
	a, b: ^string;
Begin
	new(a);
	a^ := 'This is a string which resides in the heap';
	new(b);
	b := a;
	writeln(b^);
	dispose(a);
	dispose(b);
End.

