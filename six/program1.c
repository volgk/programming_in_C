// Program to calculate the absolute value of an integer

#include <stdio.h>

int main(void)
{
	int number;

	printf("Type your number: ");
	scanf("%i", &number);

	if (number < 0)
		number = -number;

	printf("The absolute number is %i\n", number);

	return 0;
}
