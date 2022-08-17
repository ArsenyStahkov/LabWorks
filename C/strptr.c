#include <stdio.h>

int main()
{
	char str[] = "Hello";
	char *ptr = "Hello";
	str[4] = 0;
	printf("%i\n", sizeof(str));
	printf("%i\n", sizeof(ptr));
	int i;
	for (i = 0; str[i] != 0; i++)
		printf("%c", str[i]);
	printf("\n");
	return 0;
}

