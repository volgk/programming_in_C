// Program to search a pattern of bits in a source integer.
// Copied, but studied.
// I note how I interpreted the code, so it may be wrong.
// Source: https://github.com/ivanbrennan/programming-in-c/blob/master/ex.12.6.c

#include <stdio.h>

int main (void)
{
	int bitpat_search (unsigned source, unsigned pattern, int count);
	int result = bitpat_search (0xe1f4, 0x5, 3);

	if (result != -1)
		printf("The location is %i\n", result);
	else
		printf("No match found.\n");
	
	return 0;
}


int bitpat_search (unsigned source, unsigned pattern, int count)
{
	unsigned source_bits = 0;
	unsigned shift_width;
	unsigned mask, i;

	int size_int (void);

	while ( (source >> source_bits) > 0)	// Find the poss where the 1 bits start
		source_bits++;

	shift_width = size_int () - count;			// Exclude the count of pattern bits
	mask        = ~0u >> shift_width;		// Rest the true bits 
	
	pattern &= mask;

	pattern <<= source_bits - count;		// Move the pattern to source_bits poss
	mask    <<= source_bits - count;

	for (i = 0; i <= shift_width; i++)
	{
		if ( (source & mask) == pattern )
			return i + source_bits;			// I think I need to cosider the zeros.

		pattern >>= 1;
		mask    >>= 1;
	}

	return -1;
}


int size_int (void)
{
	unsigned i, size = 0;

	for (i = ~0u; i > 0; size++)
		i >>= 1;

	return size;
}
