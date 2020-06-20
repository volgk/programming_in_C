// Program to display 20 lines of file

#include <stdio.h>
#include <stdlib.h>

void display (char buffer[], FILE *fptr);

int main (void)
{
	FILE *file;
	char buffer[80];
	char fname[] = "file1";

	if ( (file = fopen (fname, "r")) == NULL)
	{
		fprintf(stdout, "Can't open %s to read.\n", fname);
		exit (EXIT_FAILURE);
	}

	display (buffer, file);

	return 0;
}


void display (char buffer[], FILE *fptr)
{
	int  i, lines;
	char c;

	for (i = 0, lines = 0; buffer[i] != '\0'; i++, lines++)
	{
		if (lines == 2)
		{
			printf("Press \'q\' to exit, or any key to continue: ");
			c = getchar ();
			if ( getchar () == 'q'  &&  c != '\n')
				exit (EXIT_SUCCESS);

			lines = 0;
		}

		if ( fgets (buffer, 80, fptr) != NULL )
			fputs (buffer, stdout);
		else
			break;
	}

	fclose (fptr);
}
