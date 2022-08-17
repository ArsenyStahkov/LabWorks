Program SinglyLinkedList;

Type
	itemPointer = ^item;
	item = record
		data: integer;
		next: itemPointer;
	end;

Var
	first: itemPointer;
Begin
	new(first);
	first^.data := 10;
	writeln(first^.data);
	new(first^.next);
	first^.next^.data := 21;
	writeln(first^.next^.data);
	new(first^.next^.next);
	first^.next^.next^.data := 56;
	writeln(first^.next^.next^.data);
	first^.next^.next^.next := nil;
End.
