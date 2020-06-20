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
	float guess = 1.0;
	float ratio;

	while (absoluteValue (guess * guess - x) >= epsilon)
	{
		guess = (x / guess + guess) / 2.0;
		ratio = x / (guess * guess);
	}

	printf("ratio = %f\t", ratio);

	return guess;
}

float inputAValue (void)
{
	float epsilon;

	printf("Type the value of epsilon: ");
	scanf("%f", &epsilon);
	
	return epsilon;
}


int main (void)
{
	int   i;
	float epsilon, number;

	printf("Type the value for square root: ");
	scanf("%f", &number);

	for (i = 0; i < 2; i++)
	{
		epsilon = inputAValue ();
		printf("squareRoot (%f)   = %f\n\n", number,
				squareRoot (epsilon, number));
	}

	return 0;
}
