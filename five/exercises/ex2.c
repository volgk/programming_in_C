/* Write a program to generate and display a table of n and n^2, for integer
 * values of n ranging from 1 to 10.
 */

#include <stdio.h>

int main(void)
{

	int n, m;

	printf("TABLE\n");
	printf(" n	n^2\n");
	printf("============\n");

	for (n = 1; n <= 10; n++)
	{
		m = n * n;
		printf("%2i	%i\n", n, m);
	}

	return 0;

}
