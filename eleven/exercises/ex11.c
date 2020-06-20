// Program to update a date usong pointers

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int day;
	int month;
	int year;
};


int main (void)
{
	struct date date;
	struct date *ptr_today = &date;
	
	void dateUpdate (struct date *today);

	date.day   = 16;
	date.month = 5;
	date.year  = 2020;

	dateUpdate (ptr_today);

	printf("Tomorrow is %.2i.%.2i.%.2i\n", date.day, date.month, date.year % 100);

	return 0;
}


// Function to calculate tomorrow's date

void dateUpdate (struct date *today)
{
	struct date *tomorrow = today;
	int numberOfDays (struct date *d);

	if (today->day != numberOfDays (today))
		tomorrow->day   = today->day + 1;
	else if (today->month == 12)
	{
		tomorrow->day   = 1;
		tomorrow->month = 1;
		tomorrow->year  = today->year + 1;
	}
	else
	{
		tomorrow->day   = 1;
		tomorrow->month = today->month + 1;
	}
}


// Function to find the number of days in a month using pointers

int numberOfDays (struct date *d)
{
	int days;
	bool isLeapYear (struct date *d);
	const int daysPerMonth[12] =
							{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isLeapYear  &&  d->month == 2)
		days = 29;
	else
		days = daysPerMonth[d->month - 1];

	return days;
}


// Functiont to determine if it's a leap year

bool isLeapYear (struct date *d)
{
	if ((d->year % 4 == 0  &&  d->year % 100 != 0)  ||  d->year % 400 == 0)
		return true;
	else
		return false;
}
