// Program to search match in a string

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	char string[]   = "a chatterbox";
	char pattern[]  = "a";
	int  result;
	
	int  findString (char string[], char pattern[]);

	result = findString (string, pattern);

	if (result != -1)
		printf("The location is: %i\n", result);
	else
		printf("I don't give a shit where is the pattern.\n");

	return 0;
}


int findString (char string[], char pattern[])
{
	int i, j, size;
	int count = 0;                    // to count the rigth order of characters

	int sizeString (char pattern[]);

	size = sizeString (pattern);

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == pattern[count])
		{
			count++;
			printf("string[%i] = %c\n", i, string[i]);
			
			if (count == size)
				return i - (count - 1); // return to the first finded character 
		}
		else
			count = 0;
	}
	
	return -1;
}


// Function to calculate the size of an array

int sizeString (char pattern[])
{
	int i, count = 0;

	for (i = 0; pattern[i] != '\0'; i++)
		count++;

	return count;
}
