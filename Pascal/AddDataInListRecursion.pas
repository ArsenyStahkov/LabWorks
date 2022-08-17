Program AddDataInListRecursion;

Type
	itemPointer = ^item;
	item = record
		data: integer;
		next: itemPointer;
	End;

Procedure ShowListElements(var p: itemPointer);
Begin
	while p <> nil do
	Begin
	writeln(p^.data);
	p := p^.next;
	End;
End;

Procedure AddNumIntoSortedList(var p: itemPointer; x: integer);
Var	
	second: itemPointer;
Begin
	if (p = nil) or (p^.data > x) then
	Begin
		new(second);
		second^.data := x;
		second^.next := p;
		p := second;
	End
	else
		AddNumIntoSortedList(p^.next, x);
End;



Var
	first, last: itemPointer;
	n, i: integer;
Begin
	i := 1;
	first := nil;
	last := nil;
	while i < 12 do
	Begin
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
		last^.data := i;
		last^.next := nil;
		i := i + 2;
	End;
	last := first;
	ShowListElements(first);
	read(n);
	AddNumIntoSortedList(last, n);
	ShowListElements(last);
End.
