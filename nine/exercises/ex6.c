// Program to determine tomorrow's day

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int day;
	int month;
	int year;
};


// Function to calcu;ate tomorrow's date

struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date d);

	if (today.day != numberOfDays (today))
		tomorrow = (struct date) { today.month, today.day + 1, today.year };

	else if (today.month == 12)
		tomorrow = (struct date) { 1, 1, today.year + 1 };
	
	else
		tomorrow = (struct date) { 1, today.month + 1, today.year };

	return tomorrow;
}


// Function to find the number of days in a month

int numberOfDays (struct date d)
{
	int days;
	bool isLeapYear (struct date d);
	const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (isLeapYear  &&  d.month == 2)
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}


// Funstion to determine if it's a leap year

bool isLeapYear (struct date d)
{
	bool leapYearFlag;

	if ((d.year % 4 == 0  &&  d.year % 100 != 0)  || d.year % 400 == 0)
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}


int main (void)
{
	struct date dateUpdate (struct date today);
	struct date thisDay, nextDay;

	printf("Enter today's date (dd mm yyyy): ");
	scanf ("%i %i %i", &thisDay.day, &thisDay.month, &thisDay.year);

	nextDay = dateUpdate (thisDay);

	printf("Tomorrow's date is %.2i/%.2i/%.2i\n",
			nextDay.day, nextDay.month, nextDay.year % 100);

	return 0;
}
