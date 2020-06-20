// Program to check if a number is a prime

#include <stdio.h>
#include <stdbool.h>

int number = 79;

_Bool prime (int number)
{
	int   i;
	_Bool isPrime;

	if (number == 1  || number == 2)
		isPrime = true;

	isPrime = true;

	for (i = 3; i < number; i += 2)
		if (number % i == 0)
			isPrime = false;

	return isPrime;
}


int main (void)
{
	printf("The result is: %i\n", prime (number));

	return 0;
}
