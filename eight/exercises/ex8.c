// Program to calculate a quadratic formula

#include <stdio.h>

float discriminant (float a, float b, float c)
{
	float discriminant;

	discriminant = b*b - 4 * a * c;

	return discriminant;
}


float absoluteValue (float x)
{
	if (x < 0)
		x = -x;

	return x;
}


float squareRoot (float x)
{
	const float epsilon = .01;
	float guess = 1.0;
	float ratio;

	while (ratio != 1)
	{
		while (absoluteValue (guess * guess -x) >= epsilon)
		{
			guess = (x / guess + guess) / 2.0;
			ratio = x / (guess * guess);
		}
		epsilon = epsilon * .1;
	}

	return guess;
}


float calculateX (float a, float b, float c)
{
	float x, x1, x2;
	_Bool equation;
	
	x1 = (-b + (squareRoot (discriminant (a, b, c)))) / (2 * a);
	x2 = (-b - (squareRoot (discriminant (a, b, c)))) / (2 * a);

	printf("x1 = %f\nx2 = %f\n\n", x1, x2);
	
	if (a*x*x + b*x + c == 0)
		equation = 1;
	else
		equation = 0;

	x = x1;
	while (equation != 0)
		x = x2;

	return x;
}


int main (void)
{
	float a, b, c;

	printf("Type the values for a, b and c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a == 0)
		printf("\na = 0, equation isn't quadratic\n");

	else if (discriminant(a, b, c) < 0 )
		printf("\nDiscriminant < 0, x1 and x2 are imaginary.\n");
	
	else
	{
		printf("\ndiscriminant = %f\n\n", discriminant (a, b, c));
		printf("Calculating x1 and x2....\n");
		printf("The solution is x = %f\n", calculateX (a, b, c));
	}

	return 0;
}
