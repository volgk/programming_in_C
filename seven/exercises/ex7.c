// Program to display all prime numbers between 1 and n

#include <stdio.h>

int main (void)
{
	long long int   P[150];
	int   i, j;

	for (i = 1; i < 150; i++)
		P[i] = 0;

	for (i = 2; i < 150; i++)
		for (j = 2; i*j <= 150; j++)
			P[i*j] = 1;

	for (i = 0; i < 150; i++)
		if (P[i] == 0)
			printf("%i ", i);

	printf("\n");
	return 0;
}
