// Program to set specific bites in another number

#include <stdio.h>

int main (void)
{
	unsigned bits_to_set = 1234565466;
	unsigned number      = 0x55u;
	int      start       = 23;
	int      count       = 6;
	unsigned result;

	unsigned *bits = &bits_to_set;

	int size_int   (void);
	int bit_print  (unsigned number);
	int bitpat_set (unsigned *bits, unsigned number, int start, int count);


	printf("Source: ");
	bit_print (bits_to_set);

	printf("Number: ");
	bit_print (number);

	result = bitpat_set (bits, number, start, count);
	
	printf("Result: ");
	bit_print (result);

	return 0;
}


int bitpat_set (unsigned *bits, unsigned number, int start, int count)
{
	unsigned shift_with;
	unsigned mask = ~0u;
	unsigned result;

	int size_int  (void);
	int bit_print (unsigned number);

	shift_with = size_int () - (size_int () + count);
	
	mask >>= shift_with;
	mask <<= size_int () - start - count;
	mask &= *bits;

	printf("Mask:   ");
	bit_print (mask);

	result = number | mask;

	return result;
}


int size_int (void)
{
	unsigned i, size = 0;

	for (i = ~0; i > 0; size++)
		i >>= 1;

	return size;
}


int bit_print (unsigned number)
{
	unsigned i;

	for (i = 1 << 31; i > 0; i /= 2)
		(number & i)? printf("1"): printf("0");

	printf("\n");
}
