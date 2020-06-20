// Program to update time and date

#include <stdio.h>
#include <stdbool.h>


struct dateAndTime
{
	int hour;
	int minutes;
	int seconds;
	int day;
	int month;
	int year;
};


int main (void)
{
	struct dateAndTime now, later;
	struct dateAndTime clockKeeper (struct dateAndTime now);

	printf("Type the time and date (hh:mm:ss dd mm yyyy): ");
	scanf("%i:%i:%i %i %i %i", &now.hour, &now.minutes, &now.seconds,
			                   &now.day,  &now.month,   &now.year);

	later = clockKeeper (now);

	printf("Updated date and time\n\t%.2i:%.2i:%.2i %.2i.%.2i.%.2i\n\n",
			later.hour, later.minutes, later.seconds,
			later.day,  later.month,   later.year);

	return 0;
}


// Function to check the time

struct dateAndTime clockKeeper (struct dateAndTime now)
{
	struct dateAndTime updateTime (struct dateAndTime now);
	struct dateAndTime updateDate (struct dateAndTime later);

	struct dateAndTime later;

	later = updateTime (now);

	if (later.hour == 0)
		later = updateDate (later);

	return later;
}

// Function to update the time

struct dateAndTime updateTime (struct dateAndTime now)
{
	struct dateAndTime later;
	struct dateAndTime updateDate (struct dateAndTime now);
	
	later = now;	
	
	later.seconds = now.seconds + 1;

	if (later.seconds == 60)
	{
		later.seconds = 0;
		later.minutes = now.minutes + 1;
	}

	if (later.minutes == 60)
	{
		later.minutes = 0;
		later.hour    = now.hour + 1;
	}
	
	if (later.hour == 24)
	{
		later.hour    = 0;
		later.minutes = 0;
		later.seconds = 0;
	}

	return later;
}


// Function to update the date

struct dateAndTime updateDate (struct dateAndTime later)
{
	int numberOfDays (struct dateAndTime later);

	if (later.day != numberOfDays (later))
		later.day     = later.day + 1;

	else if (later.month == 12)
	{
		later.day     = 1;
		later.month   = 1;
		later.year    = later.year + 1;
	}

	else
	{
		later.day     = 1;
		later.month   = later.month + 1;
	}

	return later;
}


// Function to find the number of days in month

int numberOfDays (struct dateAndTime later)
{
	int days;
	bool isLeapYear (struct dateAndTime later);
	const int daysPerMonth[12] = 
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 , 31 };

	if (isLeapYear  &&  later.month == 2)
		days = 29;
	else
		days = daysPerMonth[later.month -1];

	return days;
}


// Function to determine if it's a leap year

bool isLeapYear (struct dateAndTime later)
{
	bool leapYearFlag;

	if ((later.year % 4 == 0  &&  later.year % 100 != 0)  ||  later.year % 400 == 0)
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}
