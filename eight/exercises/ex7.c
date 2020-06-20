// Function to raise an integer to a positive  integer power

#include <stdio.h>

int x_to_the_n (int x, int n)
{
	int	     i;
	long int result = 1;

	for (i = 1; i <= n; i++)
		result = result * x;

	return result;
}


int main (void)
{
	printf("2^3 = %i\n", x_to_the_n (2, 3));
	printf("7^2 = %i\n", x_to_the_n (7, 2));
	printf("7^7 = %i\n", x_to_the_n (7, 7));

	return 0;
}
