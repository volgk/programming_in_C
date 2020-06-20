// Ilustrate the use of various arithmetic operators.

#include <stdio.h>

int main(void)
{

	int a =	100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;

	result = a - b;			// Substraction
	printf("a - b = %i\n", result);

	result = a + b;			// Adition
	printf("a + b = %i\n", result);

	result = b * c;			// Multiplication
    printf("b * c = %i\n", result);

	result = a / c;			// Division
	printf("a / c = %i\n", result);

	result = a + b * c;		// Precendence
	printf("a + b * c = %i\n", result);

	printf("a * b + c * d = %i\n", a * b + c * d);

	return 0;

}
