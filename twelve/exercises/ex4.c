// Program to illustrate rotation of integers

#include <stdio.h>

int main (void)
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
	unsigned int rotate (unsigned int value, int n);

	printf("%x\n", rotate (w1, 8));
	printf("%x\n", rotate (w1, -16));
	printf("%x\n", rotate (w2, 4));
	printf("%x\n", rotate (w2, -2));
	printf("%x\n", rotate (w1, 0));
	printf("%x\n", rotate (w1, 44));

	return 0;
}


unsigned int rotate (unsigned value, int n)
{
	unsigned int result, bits;
	int size_int (int number);

	if (n > 0)
		n = n % size_int (value);
	else
		n = -(-n % size_int (value));

	if (n == 0)
		result = value;
	else if (n > 0)			// left rotate
	{
		bits = value >> ( (size_int (value)) - n);
		result = value << n | bits;
	}
	else					// right rotate
	{
		n = -n;
		bits = value < ((size_int (value)) - n);
		result = value >> n | bits;
	}

	return result;
}


int size_int (int number)
{
	unsigned i, size = 0;

	for (i = 1 << 31; i > 0; i /= 2, size ++);

	return size;
}
