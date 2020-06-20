// Program to extract bit patern from integer

#include <stdio.h>

int main (void)
{
	int bitpat_get (unsigned source, int start, int count);

	printf("bitpat_get (0xe1f4, 17, 3) = %i\n\n", bitpat_get (0xe1f4, 17, 3));
	
	bitpat_get (0xe1f4, 0, 3);
	printf("\n");
	bitpat_get (0x2d, 3, 5);

	return 0;
}


int bitpat_get (unsigned source, int start, int count)
{
	unsigned mask;
	unsigned shift_width;
	unsigned result;

	int int_size (void);
	void bit (unsigned number);

	shift_width = int_size () - count - 1;
	
	printf("Source: ");
	bit (source);

	mask        = ~0u << shift_width;
	mask >>= start;
	printf("Mask:   ");
	bit (mask);

	result = source & mask;
	printf("Result: ");
	bit (result);

	return result;
}

int int_size (void)
{
	unsigned i, size = 0;

	for (i = ~0u; i > 0; size++)
		i >>= 1;

	return size;
}


void bit (unsigned number)
{
	unsigned i;

	for (i = 1 << 31; i > 0; i /= 2)
		(number & i)? printf("1"): printf("0");

	printf("\n");
}
