// Program to work with fractions

#include <stdio.h>

typedef struct
{
	int numerator;
	int denominator;
} Fraction;


int main (void)
{
	Fraction myFract;

	myFract.numerator   = 1;
	myFract.denominator = 3;
	
	printf("The fraction is %i/%i\n", myFract.numerator, myFract.denominator);

	return 0;
}
