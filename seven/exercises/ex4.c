// Program to calculate the average of an array of 10 floating-point values

#include <stdio.h>

int main (void)
{
	float values[10] = {1.2, 2.3, 32.4, 34.4, 4.3, 3.2, 32, 2.1, 1.1, 2.1};
	float sum, average;
	int   i;

	sum = 0;

	for (i = 0; i < 11; i++)
	{
		printf("%f\n", values[i]);
		sum = sum + values[i];
	}

	printf("average = %f\n", sum / i);


	return 0;
}
