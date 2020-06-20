/* Program to display the result of dividing two integers to 
 * three-decimal-places accuracy
 */

#include <stdio.h>

int main (void)
{
	int   value1, value2;
	float result;

	printf("Type two numbers to divide them: ");
	scanf("%i %i", &value1, &value2);

	if (value2 == 0)
		printf("Division by zero.\n");
	else
	{
		result = (float) value1 / value2;
		printf("The result of division is %.3f\n", result);
	}

	return 0;
}
