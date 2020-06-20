// Program to remove a pattern from a string

#include <stdio.h>

int main (void)
{
	char text[] = "the wrong son";
	int  i, start = 3;
	int  charToRemove = 1;
	void removeString (char text[], int start, int charToRemove);

	removeString (text, start, charToRemove);

	for (i = 0; text[i] != '\0'; i++)
		printf("%c", text[i]);
	
	printf("\n");

	return 0;
}


void removeString (char text[], int start, int charToRemove)
{
	int  i;

	for (i = start; text[i] != '\0'; i++)
		text[i] = text[i + charToRemove];
}
