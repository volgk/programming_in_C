// A program to find the next largest even multiple for values i and j.

#include <stdio.h>

int main(void)
{

	int i, j;

	i = 365;
	j = 7;
	printf("For i = %i and j = %i\tnext_multiple is %i\n", i, j, i + j - i % j);

	i = 12.258;
	j = 23;
	printf("For i = %i and j = %i\tnext_multiple is %i\n", i, j, i + j - i % j);

	i = 996;
	j = 4;
	printf("For i = %i and j = %i\tnext_multiple is %i\n", i, j, i + j - i % j);

	return 0;

}
