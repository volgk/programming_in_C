// Program to insert a string in other string

#include <stdio.h>

int main (void)
{
	char text[50]     = "the wrong son";
	char insert[]   = "per";
	int  position   = 10;
	
	void printfArray  (char string[]);
	void insertString (char text[], char insert[], int position);

	insertString (text, insert, position);

	printfArray (text);

	return 0;
}
		
	
void insertString (char text[], char insert[], int position)
{
	int  sizeString   (char string[]);
	int i, j, k;
	char result[50];
	
	int  sizeText   = sizeString (text);
	int  sizeInsert = sizeString (insert);

	for (i = 0; i < position; i++)
		result[i] = text[i];

	for (j = 0; j < sizeInsert; j++)
		result[i+j] = insert[j];

	for (k = position; text[k] != '\0'; k++)
	{
		result[j + i] = text[k];
		i++;
	}
	result[j+i] = '\0';

	for (i = 0; result[i] != '\0'; i++)
		text[i] = result[i];
}


// Function to calculate the size of an array

int sizeString (char string[])
{
	int i, size = 0;

	for (i = 0; string[i] != '\0'; i++)
		size++;

	return size;
}


// Function to print a char array

void printfArray (char string[])
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		printf("%c", string[i]);

	printf("\n");
}
