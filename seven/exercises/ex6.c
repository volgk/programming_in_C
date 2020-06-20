// Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main (void)
{
	int previous1, previous2, febonacci, i;

	previous1 = 0;
	previous2 = 1;
	printf("%i %i ", previous1, previous2);

	for (i = 2; i < 15; i++)
	{
		febonacci = previous1 + previous2;
		printf("%i ", febonacci);
		previous1 = previous2;
		previous2 = febonacci;
	}
	
	printf("\n");

	return 0;
}
