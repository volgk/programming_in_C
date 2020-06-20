// Using Nested for Loops

#include <stdio.h>

int main(void)
{

	int n, number, triangularNumber, test_nr, counter;

	printf("How many times you want to test the program? ");
	scanf("%i", &test_nr);

	for (counter = 1; counter <= test_nr; counter++)
	{
		printf("What triangular number do you want? ");
		scanf("%i", &number);

		triangularNumber = 0;

		for (n = 1; n <= number; n++)
			triangularNumber += n;

		printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}

	return 0;

}
