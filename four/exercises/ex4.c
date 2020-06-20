// A program that convert degrees Farenheit(F) to degrees Celsius(C)

#include <stdio.h>

int main(void)
{

	int F = 27;			// Temperature of 27 degrees F
	float C;

	C = (F - 32) / 1.8;

	printf("Transforme the %i degrees Farenheit in %f degrees Celsius.\n",
			F, C);

	return 0;

}
