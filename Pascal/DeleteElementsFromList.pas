Program DeleteElementsFromList;

Type
	itemPointer = ^item;
	item = record
		data: integer;
		next: itemPointer;
	End;

Var
	first, second: itemPointer;
	pointToPoint: ^itemPointer;
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
	pointToPoint := @first;
	while pointToPoint^ <> nil do
	Begin
	if pointToPoint^^.data < 0 then
		Begin
		second := pointToPoint^;
		pointToPoint^ := pointToPoint^^.next;
		dispose(second);
		End
	Else
		pointToPoint := @(pointToPoint^^.next);
	End;
	while first <> nil do
	Begin
		writeln(first^.data);
		first := first^.next;
	End;
End.

