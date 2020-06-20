// Program to writes columns through n of each line of a file to stdout
// I don't give a fuck how to do this. So I get inspired by
// https://github.com/ivanbrennan/programming-in-c/blob/master/ex.16.5.c

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int  chr;
	int  m, n, count = 0;
	int  buffsize = 80;
	char fname[] = "list";
	char buffer[buffsize];

	FILE *file;
	
	if ( (file = fopen (fname, "r")) == NULL )
	{
		fprintf (stderr, "Can't open %s to read.\n");
		exit (EXIT_FAILURE);
	}
	

	printf("Enter m: ");
	fgets (buffer, buffsize, stdin);
	sscanf(buffer, "%i", &m);

	printf("Enter n: ");
	fgets (buffer, buffsize, stdin);
	sscanf(buffer, "%i", &n);


	while ( (chr = getc (file)) != EOF)
	{
		count++;

		if (chr == '\n'  ||  chr == '\0')
		{
			fputc ('\n', stdout);
			count = 0;
		}
		else if (count >= m  && count <= n)
			fputc(chr, stdout);
	}
	
	fclose (file);

	return 0;
}
