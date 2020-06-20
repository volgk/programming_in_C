// Program to test bits

#include <stdio.h>

int main (void)
{
	unsigned number = 54;
	int      n = 3;

	int  bit_set  (unsigned number, int n);
	int  size_int (unsigned number);
	void bit      (unsigned number);

	if (bit_set (number, n) == -1)
		printf("Invalid n. Choose a value between 0 and %i.\n",
				size_int (number) );
	else
		bit ( bit_set (number, n) );

	return 0;
}


int bit_test (unsigned number, int n)
{
	unsigned i, j = 0;

	int size_int (unsigned number);

	if (n > 0  &&  n < size_int (number))
	{
		for (i = 1 << 31; i > 0, j == n; i /= 2, j++)
			if (number & i)
				return 1;
	}
	else
		return -1;

	return 0;
}


int bit_set (unsigned number, int n)
{
	unsigned i, j;

	int bit_test (unsigned number, int n);
	int size_int (unsigned number);

	for (i = 1 << 31, j = 0; i > 0, j <= n; i /= 2, j++);

	if ( !(bit_test (number, n)) )
		number = number | 1 << ( (size_int (number)) - j );

	else if (bit_test (number, n) == -1)
		return -1;

	return number;
}
		

void bit (unsigned number)
{
	unsigned i;

	for (i = 1 << 31; i > 0; i /= 2)
		(number & i)? printf("1"): printf("0");
	
	printf("\n");
}


int size_int (unsigned number)
{
	unsigned i, size = 0;

	for (i = 1 << 31; i > 0; i /= 2, size++);

	return size;
}
