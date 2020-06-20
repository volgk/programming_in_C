// Program to sort an array of integers into ascending order

#include <stdio.h>

int  array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
	              44, -3, -9, 12, 17, 22, 6, 11 };

void sort (int a[], int n, _Bool asc)
{
	int i, j, temp;

	if (asc == 1)
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
	else
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
			{
				if (a[i] < a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}	
}


void displayArray (int arraySize, int array [arraySize])
{
	int index;

	for (index = 0; index < arraySize; index++)
		printf("%i ", array[index]);
	
	printf("\n\n");
}



int main (void)
{
	int  i;

	void sort (int a[], int n, _Bool asc);
	void displayArray (int arraySize, int array [arraySize]);

	printf("The array before the sort:\n");
	displayArray (16, array);

	sort (array, 16, 1);
	printf("The array after ascending sort:\n");
	displayArray (16, array);

	sort (array, 16, 0);
	printf("The array after descending sort:\n");
	displayArray (16, array);
	
	return 0;
}
