// Program that evaluate expressions and display the result.

#include <stdio.h>

int main(void)
{

	float a = 3.31e-8,
		  b = 2.01e-7,
		  c = 7.16e-6,
		  d = 2.01e-8,
		  result;

	result = (a * b) / (b + c);
	printf("The result is %e\n", result);

	return 0;

}
