// Program to insert a string in another string

#include <stdio.h>

int main (void)
{
	char text[]         = "the wrong son";
	char charToInsert[] = "per";
	int  i, possition   = 10;
	void insertString (char text[], char charToInsert[], int possition);


	printf("Text before:\n");
	for (i = 0; text[i] != '\0'; i++)
		printf("%c", text[i]);
	printf("\n");

	insertString (text, charToInsert, possition);

	printf("Text after:\n");
	for (i = 0; text[i] != '\0'; i++)
		printf("%c", text[i]);
	printf("\n");


	return 0;
}


void insertString (char text[], char charToInsert[], int possition)
{
	int  i, j;
	int sizeInsert;
	int sizeString (char string[]);

	sizeInsert = sizeString (charToInsert);

	for (i = possition; text[i] != '\0'; i++)
		text[i + sizeInsert] = i;
		
		for (j = 0; charToInsert[j] != '\0'; j++)
			text[i] = charToInsert[j];
}


int sizeString (char string[])
{
	int i, size = 0;

	for (i = 0; string[i] != '\0'; i++)
		size++;

	return size;
}
