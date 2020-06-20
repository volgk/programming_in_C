// Program to replace a char string with another

#include <stdio.h>
#include <stdbool.h>

// Function to find a string in a text

int findString (char source[], char string[])
{
	int i, size;
	int count = 0;
	int sizeString (char string[]);
	
	size = sizeString (string);

	for (i = 0; source[i] != '\0'; i++)
	{
		if (source[i] == string[count])
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
	int sz;

	for (sz = 0; string[sz] != '\0'; sz++);

	return sz;
}


// Function to remove a string from text

void removeString (char source[], int position, int count)
{
	for (; source[position] != '\0'; position++)
		source[position] = source[position + count];
}


// Function to insert a string

void insertString (char source[], char insert[], int position)
{
	// if (strsz(insert) + strsz(text) > strsz(text))
	// return buffer overflow;

	int  i, j, k;
	int  sizeString (char string[]);
	char result[50]; // fixed size buffer overflow

	int  sizeText   = sizeString (source);
	int  sizeInsert = sizeString (insert);
	
	for (i = 0; i < position; i++)
		result[i] = source[i];

	for (j = 0; j < sizeInsert; j++)
		result[i+j] = insert[j];

	for (k = position; source[k] != '\0'; k++)
	{
		result[i+j] = source[k];
		i++;
	}
	result[i+j] = '\0';

	for (i = 0; result[i] != '\0'; i++)
		source[i] = result[i];
}


// Function to replace a string with another

bool replaceString (char source[], char s1[], char s2[])
{
	int  position, count;

	int  sizeString   (char string[]);
	int  findString   (char source[], char s1[]);
	void removeString (char source[], int position, int count);
	void insertString (char source[], char s2[],    int position);

	// if ((pos = findstr(src, dst)) != -1) {

	if ( (position = findString (source, s1) ) != -1)
	{
		count = sizeString (s1);
		removeString (source, position, count);
		insertString (source, s2, position);
		return true;
	}
	else
		return false;
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
	char source[50]  = "text for one";
	char s1[]        = " ";
	char s2[]        = ":";

	bool replaceString (char source[], char s1[], char s2[]);
	void printfArray   (char string[]);

	printfArray (source);

	while ( replaceString(source, s1, s2) );

	printfArray (source);

	return 0;
}
