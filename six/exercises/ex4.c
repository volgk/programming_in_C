// Program to acts as a simple printing calculator 

#include <stdio.h>

int main (void)
{
	int   number;
	char  operator;
	float accumulator;

	printf("Begin Of Calculations.\n");

	while (1)
	{
		printf("Type the expresion here: ");
		scanf("%i %c", &number, &operator);

		switch (operator)
		{
			case 'S':
				accumulator = number;
				printf("Content of accumulator\n");
				printf("= %.5f\n", accumulator);
				break;

			case '+':
				accumulator += number;
				printf("= %.5f\n", accumulator);
				break;

			case '-':
				accumulator -= number;
				printf("= %.5f\n", accumulator);
				break;

			case '*':
				accumulator *= number;
				printf("= %.5f\n", accumulator);
				break;

			case '/':
				if (number == 0)
					printf("Division by zero.\n");
				else
				{
					accumulator /= number;
					printf("= %.5f\n", accumulator);
				}
				break;

			case 'E':
				printf("= %.5f\n", accumulator);
				printf("End Of Calculations.\n");
				return 0;
				break;

			default:
				printf("Unknoun operator.\n");
				break;
		}
	}

	return 0;
}
