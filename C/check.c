#include <stdio.h>

void first_cycle()
{
	int a, b;
	a = 10;
	b = 10;
	printf("%i\n", a++);
	printf("%i\n\n", ++b);

	for(int i = 0; i < 10; i++)
		printf("%i ", i);
	printf("\n\n");
	for(int k = 0; k < 10; ++k)
		printf("%i ", k);

}

int main()
{
	first_cycle();
	return 0;
}
