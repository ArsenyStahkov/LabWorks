Program AddDataInBeginning;

Type
	itemPointer = ^item;
	item = record
		data: integer;
		next: itemPointer;
	End;

Var
	first, second: itemPointer;
	x: integer;
Begin
	first := nil;
	while not SeekEof do
	Begin
		read(x);
		new(second);
		second^.data := x;
		second^.next := first;
		first := second;
	End;
	while first <> nil do
	Begin
		writeln(first^.data);
		first := first^.next;
	End;
End.

















