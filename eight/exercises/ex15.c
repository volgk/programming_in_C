// Program to convert a positive integer to another base 

#include <stdio.h>
#include <stdlib.h>

int      convertedNumber [64];
long int numberToConvert;
int      base;
int      digit = 0;

int getBase (void)
{
	printf("Base: ");
	scanf("%i", &base);
	
	if (base < 2  ||  base > 16)
	{
		printf("The base must be between 2 and 16.\n");
		getBase ();
	}

	return base;
}


int getNumberToConvert (void)
{
	printf("Number to convert: ");
	scanf("%li", &numberToConvert);
	
	if (numberToConvert == 0)
	{
		printf("Invalid number to convert.\n");
		exit (0);
	}

	return numberToConvert;
}


void getNumberAndBase (void)
{
	getNumberToConvert ();
	getBase ();
}


void convertNumber (void)
{
	do
	{
		convertedNumber[digit] = numberToConvert % base;
		digit ++;
		numberToConvert /= base;
	}
	while (numberToConvert != 0);
}


void displayConvertedNumber (void)
{
	const char baseDigits[16] = 
			{ '0', '1', '2', '3', '4', '5', '6', '7',
			  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int   nextDigit;

	printf("Converted number = ");

	for (--digit; digit >= 0; digit--)
	{
		nextDigit = convertedNumber[digit];
		printf("%c", baseDigits[nextDigit]);
	}

	printf("\n");
}


int main (void)
{
	void getNumberAndBase (void),
		 convertNumber (void),
		 displayConvertedNumber (void);

	getNumberAndBase ();
	convertNumber ();
	displayConvertedNumber ();

	return 0;
}
