// Program to copy lines from two files

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char fname1[] = "file1";
	char fname2[] = "file2";
	char buffer[80];
	FILE *file1, *file2;
	int  i;

	if ( (file1 = fopen (fname1, "r"))  ==  NULL )
	{
		fprintf(stderr, "Can't open %s to read.\n", fname1);
		exit (EXIT_FAILURE);
	}

	if ( (file2 = fopen (fname2, "r"))  ==  NULL )
	{
		fprintf(stderr, "Can't open %s to read.\n", fname2);
		exit (EXIT_FAILURE);
	}

	for (i = 0; buffer[i] != '\0'; i++)
	{
		if ( fgets (buffer, 80, file1) != NULL)
			fputs (buffer, stdout);

		if ( fgets(buffer, 80, file2) != NULL)
			fputs (buffer, stdout);
	}

	fclose (file1);
	fclose (file2);

	return 0;
}
