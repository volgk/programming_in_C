// Program to display the digits of an integer in english

#include <stdio.h>

int main (void)
{
	int number, digit, divisor, numberOfDigits, result;
	unsigned helper;

	printf("Type your number: ");
	scanf("%i", &number);


	// Function to find how many digits are in the typed number.
	divisor = 1;
	numberOfDigits = 0;

	do
	{
		divisor = divisor * 10;
		result = number / divisor;
		numberOfDigits++;
	}
	while (result != 0);


	// Function to extract the digits.
	do
	{
		divisor = divisor / 10;
		digit = number / divisor;
		number = number - divisor * digit;

		// Function to transform digits in english words.
		switch (digit)
		{
			case 0:
				printf("zero ");
				break;

			case 1:
				printf("one ");
				break;

			case 2:
				printf("two ");
				break;

			case 3:
				printf("three ");
				break;

			case 4:
				printf("four ");
				break;

			case 5:
				printf("five ");
				break;

			case 6:
				printf("six ");
				break;

			case 7:
				printf("seven ");
				break;

			case 8:
				printf("eigth ");
				break;

			case 9:
				printf("nine ");
				break;

			default:
				printf("Not a digit.\n");
				break;
		}
	}
	while (divisor != 1);
	
	printf("\n");

	return 0;
}
