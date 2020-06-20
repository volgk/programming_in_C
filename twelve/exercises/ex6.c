// Program to search bit patern in integer

#include <stdio.h>

int main (void)
{
	int  result;
	int  bitpat_search (unsigned source, unsigned pattern, int n);
	void bit           (unsigned number);

	result = bitpat_search (675848, 0x5, 3);

	bit (675848);
	bit (0x5);

	if (result == -1)
		printf("No match found.\n");
	else
		printf("The possition = %i\n", result);

	return 0;
}


int bitpat_search (unsigned source, unsigned pattern, int n)
{
	unsigned i, j = 0;
	int count = 1, x, y;

	int  size (unsigned number);
	void bit  (unsigned number);

	for (i = 1 << 31; i > 0; i /= 2, j++)
	{
		x = (source & i)? 1: 0;
		y = (pattern & count)? 1: 0;

		if (y == x)
		{
			count ++;
			if (count == n+1)
				return size (source) - ( size (source) - j ) - 2;
		}

		else
			count = 1;
	}

	return -1;
}


int size (unsigned number)
{
	unsigned i, size = 0;

	for (i = 1 << 31; i > 0; i /= 2, size++);

	return size;
}


void bit (unsigned number)
{
	unsigned i;

	for (i = 1 << 31; i > 0; i /= 2)
		(number & i)? printf("1"): printf("0");

	printf("\n");
}
