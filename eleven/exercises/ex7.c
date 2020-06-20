// Program to sort an array using pointers

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int  values[16] = { 34, -5,  6,  0, 12, 100, 56, 22,
				       44, -3, -9, 12, 17,  22,  6, 11 };

	void printfArray (int *array, const int size);
	void sort (int *array, const int size);
	
	printf("Before sorting.\n");
	printfArray (values, 16);

	sort (values, 16);

	printf("After sorting.\n");
	printfArray (values, 16);

	return 0;
}


void sort (int *array, const int size)
{
	bool cmpLoop (int *array, const int size);

	while ( cmpLoop (array, size) );
}


// Function to go through the array once, and sort by two the elements
bool cmpLoop (int *array, const int size)
{
	int * const arrayEnd = array + size;
	
	void swap (int *item1, int *item2);

	for (; array < arrayEnd - 1; array++)
		if (*array > *(array+1))
		{
			swap (array, (array+1) );
			return true;
		}

	return false;
}


void swap (int * const item1, int * const item2)
{
	int tmp;

	tmp    = *item1;
	*item1 = *item2;
	*item2 = tmp;
}


void printfArray (int *array, const int size)
{
	int *arrayEnd = array + size;

	for (; array < arrayEnd; array++)
		printf("%i ", *array);

	printf("\n");
}
