// Program to illustrate a structure

#include <stdio.h>

int main (void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct date today;

	today.month = 4;
	today.day   = 21;
	today.year  = 2020;

	printf("Today's date is %i/%i/%.2i.\n",
			today.day, today.month, today.year % 100);

	return 0;
}
