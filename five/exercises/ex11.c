// Write a program that calculates the sum of the digits of an integer.

#include <stdio.h>

int main(void)
{
	int number, right_digit, sum;

	printf("Enter your number: ");
	scanf("%i", &number);

	printf("The sum of digits of %i ", number);

	sum = 0;
	while (number != 0)
	{
		right_digit = number % 10;
		sum += right_digit;
		number = number /10;
	}

	printf("is %i\n", sum);

	return 0;
}
