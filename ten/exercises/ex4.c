// Program to substract a substring from a string

#include <stdio.h>

int main (void)
{
	char source[] = "two words";
	char result[20] = {0};
	void substring (char source[], int start, int count, char result[]);

	substring (source, 4, 20, result);
	printf("%s\n", result);

	return 0;
}


// Function to substract 

void substring (char source[], int start, int count, char result[])
{
	int i, j;
	
	for (j = 0, i = start; source[i] != 0  &&  j < count; i++, j++)
		result[j] = source[i];

	result[i+1] = '\0';
}
