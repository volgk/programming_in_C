// Program to replace a char string with another

#include <stdio.h>

// Function to find a string in a text

int findString (char string[], char pattern[])
{
	int i, size;
	int count = 0;
	int sizeString (char pattern[]);
	
	size = sizeString (pattern);

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == pattern[count])
		{
			count++;

			if (count == size)
				return i - (count - 1);
		}
		
		else
			count = 0;
	}

	return -1;
}


// Function to calculate the size of an array

int sizeString (char string[])
{
	int i, size = 0;

	for (i = 0; string[i] != '\0'; i++)
		size++;

	return size;
}


// Function to remove a string from text

void removeString (char text[], int start, int charToRemove)
{
	int i;

	for (i = start; text[i] != '\0'; i++)
		text[i] = text[i + charToRemove];
}


// Function to insert a string

void insertString (char text[], char insert[], int position)
{
	int  i, j, k;
	int  sizeString (char string[]);
	char result[50];

	int  sizeText   = sizeString (text);
	int  sizeInsert = sizeString (insert);
	
	for (i = 0; i < position; i++)
		result[i] = text[i];

	for (j = 0; j < sizeInsert; j++)
		result[i+j] = insert[j];

	for (k = position; text[k] != '\0'; k++)
	{
		result[i+j] = text[k];
		i++;
	}
	result[j+i] = '\0';

	for (i = 0; result[i] != '\0'; i++)
		text[i] = result[i];
}


// Function to replace a string with another

void replaceString (char source[], char s1[], char s2[])
{
	int  location, charToRemove;
	
	int  sizeString   (char string[]);
	int  findString   (char source[], char s1[]);
	void removeString (char source[], int location, int charToRemove);
	void insertString (char source[], char s2[],    int location);

	if (findString (source, s1) != -1)
		location = findString (source, s1);
	else
		printf("No pattern find.\n");

	charToRemove = sizeString (s1);

	removeString (source, location, charToRemove);

	insertString (source, s2, location);

}


void printfArray (char string[])
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		printf("%c", string[i]);
	printf("\n");
}


int main (void)
{
	char source[]    = "text for * one";
	char s1[]        = " ";
	char s2[]        = "";

	void replaceString (char source[], char s1[], char s2[]);
	void printfArray   (char string[]);

	replaceString (source, s1, s2);

	printfArray (source);

	return 0;
}
