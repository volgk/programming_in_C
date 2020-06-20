/* Write a program that generates a table of triangular number using  the
 * formula: triangularNumber = n(n + 1) / 2.
 * Have the program generate every fifth triangular number between 5 and 50.
 */

#include <stdio.h>

int main(void)
{

	int n, triangularNumber;

	printf(" n	triangularNumber\n");
	printf("========================\n");

	for (n = 5; n <= 50; n += 5)
	{
		triangularNumber = n * (n + 1) / 2;
		printf("%2i		%i\n", n, triangularNumber);
	}

	return  0;

}
