Program AddDataInEnd;

Type
	itemPointer = ^item;
	item = record
		data: integer;
		next: itemPointer;
	End;

Var
	first, last: itemPointer;
	x: integer;
Begin
	first := nil;
	last := nil;
	while not SeekEof do
	Begin
		read(x);
		If first = nil then
			Begin
			new(first);
			last := first;
			End
		Else
			Begin
			new(last^.next);
			last := last^.next;
			End;
		last^.data := x;
		last^.next := nil;
	End;
	last := first;
	while first <> nil do
	Begin
		writeln(first^.data);
		first := first^.next;
	End;
	while last <> nil do
	Begin
		writeln(last^.data);
		last := last^.next;
	End;
End.


