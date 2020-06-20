// Working with gdb

#include <stdio.h>
#include <stdlib.h>

struct date
{
	int day;
	int month;
	int year;
};


struct date foo (struct date x)
{
	x.day++;

	return x;
}


int main (void)
{
	struct date today = { 13, 6, 2020};
	int    array[5]   = { 1, 2, 3, 4, 5 };
	struct date *newdate, foo ();
	char   *string    = "test string";
	int    i          = 3;

	newdate = (struct date *) malloc (sizeof (struct date));
	
	newdate -> day   = 15;
	newdate -> month = 11;
	newdate -> year  = 2020;

	today = foo (today);

	free (newdate);

	return 0;
}
