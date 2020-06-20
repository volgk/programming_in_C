// Program to read lines of data using pointers

#include <stdio.h>

int main (void)
{
	char line[81];
	void readLine (char *buffer);

	readLine (line);

	printf("%s\n", line);

	return 0;
}


void readLine (char *buffer)
{
	char c;

	while (c != '\n')
	{
		c = getchar ();
		*buffer = c;
		buffer++;
	}

	*(buffer-1) = '\0';
}
