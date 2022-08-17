Program CmdLine;

Var
	i: Integer;
Begin
	for i := 0 to ParamCount do
	writeln('[', i, ']: ', ParamStr(i));
End.
