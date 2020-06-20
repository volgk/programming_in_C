// Program to test a macro definition of minimum of three values 

#include <stdio.h>

#define		MIN(x,y)		( (x) < (y) ? (x) : (y) )
#define		MIN3(x,y,z)		( (MIN(x,y) < (z)) ? (MIN(x,y)) : (z))

int main (void)
{
	printf("%i\n", MIN3 (3, 7, 4));
	printf("%i\n", MIN3 (43, 22, 100));

	return 0;
}
