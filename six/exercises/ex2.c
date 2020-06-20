// Program to test two integers if the first is divisible by the second

#include <stdio.h>

int main (void)
{
	int value1, value2, remainder;

	printf("Type your numbers to test: ");
	scanf("%i %i", &value1, &value2);

	if (value2 == 0)
		printf("Division by zero.\n");
	else
	{
		remainder = value1 % value2;

		if (remainder == 0)
			printf("The %i is divisible by %i.\n", value1, value2);
		else
			printf("The %i is not divisible by %i.\n", value1, value2);
	}

	return 0;
}
