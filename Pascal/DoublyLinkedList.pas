Program DoublyLinkedList;

type
	itemPointer = ^item;
	item = record
		data: integer;
		next, prev: itemPointer;
	End;

Var
	first, last, second: itemPointer;
	x: integer;
Begin
	first := nil;
	while not SeekEof do
	Begin
		read(x);
		new(second);
		second^.data := x;
		second^.prev := nil;
		second^.next := first;
		if first = nil then
			last := second
		else
			first^.prev := second;
		first := second;
	End;
	while first <> nil do
	Begin
		writeln(first^.data);
		first := first^.next;
	End;
End.
