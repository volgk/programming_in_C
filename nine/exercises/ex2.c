// Program to calculate the days between two dates

#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};


// Function to type first date

int main (void)
{
	struct date first;
	struct date second;
	int calculateN (struct date d);

	printf("Type the first date (dd/mm/yyyy): ");
	scanf ("%i %i %i", &first.day, &first.month, &first.year);

	printf("Type the second date (dd/mm/yyyy): ");
	scanf ("%i %i %i", &second.day, &second.month, &second.year);
	
	printf("Number of days: %i\n",
			calculateN (second) - calculateN (first));

	return 0;
}


// Function to calculate the f()

int f (struct date d)
{
	if (d.month <= 2)
		d.year = d.year - 1;

	return d.year;
}


// Function to calculate the month

int g (struct date d)
{
	if (d.month <= 2)
		d.month += 13;
	else
		d.month++;

	return d.month;
}


// Function to calculate the Number

int calculateN (struct date d)
{
	int N;
	int f (struct date d);
	int g (struct date d);

	N = 1461 * f (d) / 4 + 153 * g (d) / 5 + d.day;

	return N;
}
