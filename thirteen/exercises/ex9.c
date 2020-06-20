// Program to test a macro that computes the absolute value

#include <stdio.h>

#define		ABSOLUTE_VALUE(x)		( ((x) < 0) ? (-(x)) : (x) )

int main (void)
{
	int x = 23, delta = 50;

	printf("%i\n", ABSOLUTE_VALUE (23));
	printf("%i\n", ABSOLUTE_VALUE (-34));
	printf("%i\n", ABSOLUTE_VALUE (x - delta));

	return 0;
}
