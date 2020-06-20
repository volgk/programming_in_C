// Program to check if a macro for printx can be used to display the 100 values

#include <stdio.h>

#define		printx(n)		printf("%i\n", (x ## n))

int main (void)
{
	printx(20);

	return 0;
}

// The ## operator doesn't work. Why?
