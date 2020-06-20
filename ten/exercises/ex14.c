// Program to transform an integer in string

#include <stdio.h>

int main (void)
{
	int  i = 0, digit, number;
	char result[50];

	void intToStr (int number, char result[]);

	printf("Enter your number: ");
	scanf ("%i", &number);
	
	intToStr (number, result);

	if (number < 0)
		printf("Tne string is: -%s\n", result);
	else
		printf("Tne string is: %s\n", result);
	
	return 0;
}


void intToStr (int number, char result[])
{
	int i = 0, digit;
	
	void reverseStr (char string[]);

	while (number != 0)
	{
		if (number < 0)
			number = -number;

		digit     = number % 10;
		result[i] = digit + '0';
		number    = number / 10;
		i++;
	}

	result[i + 1] = '\0';

	reverseStr (result);
}


int sizeStr (char string[])
{
	int size;

	for (size = 0; string[size] != '\0'; size++);

	return size;
}


void reverseStr (char string[])
{
	int sizeStr (char string []);
	
	char tmp[sizeStr (string)];
	int i, j;

	for (i = sizeStr (string) - 1, j = 0; i >= 0; i--, j++)
		tmp[j] = string[i];

	for (i = 0; string[i] != '\0'; i++)
		string[i] = tmp[i]; 
}
