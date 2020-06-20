// Program to display the day of the week of a particular date

#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

struct week
{
	char name[3];
};


int main (void)
{
	struct date d;
	int dayOfWeek (struct date d);
	int i;

	struct week days[7] = 
	{
		{ 'S', 'u', 'n' },
		{ 'M', 'o', 'n' }, { 'T', 'u', 'e' },
		{ 'W', 'e', 'd' }, { 'T', 'h', 'u' },
		{ 'F', 'r', 'i' }, { 'S', 'a', 't' }
	};

	printf("Type the date (dd mm yyyy): ");
	scanf ("%i %i %i", &d.day, &d.month, &d.year);

	i = dayOfWeek (d);
	printf("The day of week is %c%c%c\n", days[i].name[0],
			days[i].name[1], days[i].name[2]);

	return 0;
}


// Function to calculate f()

int f(struct date d)
{
	if (d.month <= 2)
		d.year --;

	return d.year;
}


// Function to calculate g()

int g (struct date d)
{
	if (d.month <= 2)
		d.month += 13;
	else
		d.month++;

	return d.month;
}


// Function to calculate the Number of days

int calculateN (struct date d)
{
	int N;
	int f (struct date d);
	int g (struct date d);

	N = 1461 * f (d) / 4 + 153 * g (d) / 5 + d.day;

	return N;
}


// Function to find the number of day of week

int dayOfWeek (struct date d)
{
	int calculateN (struct date d);
	int day;

	day = ( calculateN (d) - 621049 ) % 7;

	return day;
}
