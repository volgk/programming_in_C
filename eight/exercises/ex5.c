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
	float		etalon = 0.00001, ratio;

	while (absoluteValue (guess * guess - x) >= epsilon  &&  ratio <= etalon )
	{
		guess = (x / guess + guess) / 2.0;
		ratio = x / (guess * guess);
		if (ratio > etalon)
			etalon = ratio;
	}
	printf("ratio = %f\n", ratio);

	return guess;
}


int main (void)
{

	printf("squareRoot (2.0)   = %f\n\n", squareRoot (.01, 2.0));
	printf("squareRoot (2.0) = %f\n\n", squareRoot (.001, 2.0));
	printf("squareRoot (2.0)  = %f\n\n", squareRoot (.0001, 2.0));

	return 0;
}
