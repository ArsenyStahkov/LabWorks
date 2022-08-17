Program HelloFile;

Const
	filename = 'HelloFile.txt';
	message = 'Hello, world!';
Var
	a: text;
Begin
	assign(a, filename);
	rewrite(a);
	writeln(a, message);
	close(a);
End.

