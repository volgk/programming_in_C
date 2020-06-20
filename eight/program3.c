// Program will printf the message for 5 times

#include <stdio.h>

void printMessage (void)
{
	printf("Programming is fun.\n");
}

int main (void)
{
	int i;

	for (i = 1; i <= 5; i++)
		printMessage ();

	return 0;
}
