// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue (float x)
{
	if (x < 0)
		x = -x;
	
	return x;
}


// Function to compute the squar root of a number

float squareRoot (const float epsilon, float x)
{
	float       guess = 1.0;

	while (absoluteValue (guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;

	return guess;
}


int main (void)
{
	printf("squareRoot (2.0)   = %f\n", squareRoot (.01, 2.0));
	printf("squareRoot (144.0) = %f\n", squareRoot (.01, 144.0));
	printf("squareRoot (7.13)  = %f\n", squareRoot (.01, 7.13));

	return 0;
}
