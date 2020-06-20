/* Write a program to generate and print a table of the first 10 factorials.
 * 5! = 5 x 4 x 3 x 2 x 1 = 120
 */

#include <stdio.h>

int main(void)
{

	int n, m, f;

	printf("Table Of Factorials\n\n");
	printf(" n	factorial\n");
	printf("==================\n");


	for (n = 1; n <= 10; n++)
	{
		f = n;

		for (m = 1; m < n; m++)
			f = f * m;

		printf("%2i	%i\n", n, f);
	}

	return 0;

}
