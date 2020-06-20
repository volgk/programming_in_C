// Program to test a macro definition of minimum of two values 

#include <stdio.h>

#define		MIN(x,y)		( (x) < (y) ? (x) : (y) )

int main (void)
{
	printf("%i\n", MIN (3, 4));
	printf("%i\n", MIN (43, 22));

	return 0;
}
