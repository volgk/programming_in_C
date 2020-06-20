// Program to remove a pattern from a string

#include <stdio.h>

int main (void)
{
	char text[] = "the wrong son";
	int  start = 4;
	int  charToRemove = 6;
	int  i;

	for (i = start; i < i+ start; i++)
		printf("%c", text[i]);

	printf("\n");

	return 0;
}
