// Program to return the sum of elements in an array

#include <stdio.h>

int arraySum (int array[], int numberOfElements)
{
	int i;
	int result = 0;

	for (i = 0; i < numberOfElements; i++)
		result +=array[i];

	return result;
}


int main (void)
{
	int array [5] = {1, 2, 20, 4, 5};

	printf("Array sum: %i\n", arraySum (array, 5));

	return 0;
}
