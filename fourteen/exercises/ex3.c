// Program to illustrate the data type conversion

#include <stdio.h>

int main (void)
{
	float  f = 1.00;
	short  i = 100;
	long   l = 500L;
	double d = 15.00;

	printf("f + i = %f\n", f + i);
	printf("l / d = %f\n", l / d);
	printf("i / l + f = %f\n", i / l + f);
	printf("l + i = %li\n", l + i);
	printf("f / 2 = %f\n", f / 2);
	printf("i / (d + f) = %f\n", i / (d + f));
	printf("l / (i * 2.0) = %f\n", l / (i * 2.0));
	printf("l + i / (double) l = %f\n", l + i / (double) l);
	return 0;
}
