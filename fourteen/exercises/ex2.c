// Program to illustrate the enum statement

#include <stdio.h>

enum month { january, february, march, april, may, june, july,
			 august, september, octomber, november, december };


int main (void)
{
	enum month aMonth;

	char * monthName (enum month aMonth);

	printf("%s\n", monthName (february));

	return 0;
}


char * monthName (enum month aMonth)
{
	char *months[12] = { "january", "february", "march", "april", "may", "june",
	                   "july", "august", "september", "octomber", "november",
	                   "december" };
	
	return months[aMonth];
}
