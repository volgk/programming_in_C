// Program to generate a table of prime numbers

#include <stdio.h>

int main (void)
{
	int   p, d;
	_Bool isPrime;

	for (p = 2; p <= 50; p++)
	{
		if (p > 2  && p % 2 == 0)
			isPrime = 0;
		else
		{
			isPrime = 1;
			
			for (d = 2; d < p; d++)
				if (p % d == 0)
					isPrime = 0;

				if (isPrime != 0)
					printf("%i ", p);
		}
	}

	printf("\n");
	return 0;
}
