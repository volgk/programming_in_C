// Function to calculate the nth triangular number

#include <stdio.h>

int calculateTriangularNumber (int n)
{
	int i, triangularNumber = 0;

	for (i = 1; i <= n; i++)
		triangularNumber += i;

	return triangularNumber;
}


int main (void)
{
	int calculateTriangularNumber (int);

	printf("triangular number 10 = %i\n", calculateTriangularNumber (10));
	printf("triangular number 20 = %i\n", calculateTriangularNumber (20));
	printf("triangular number 50 = %i\n", calculateTriangularNumber (50));

	return 0;
}
