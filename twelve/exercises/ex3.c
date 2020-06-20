// Program to calculate the size of an integer

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int  number = 7;
	
	void bit  (int number);
	int  size (int number);

	bit (number);

	printf("The size of %i is %i bits, or %i bytes.\n",
			number, size (number), size (number) / 8 );

	return 0;
}


int size (int number)
{
	unsigned i, count = 0;

	for (i = 1 << 31; i > 0; i /= 2, count++);

	return count;
}


void bit (int number)
{
	unsigned i;

	for (i = 1 << 31; i > 0; i /= 2)
		(number & i)? printf("1"): printf("0");

	printf("\n");
}
