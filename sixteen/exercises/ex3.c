/* Program to copy one file to another, replacing all lowercase characters
 *  with their uppercase equivalent.
 */

#include <stdio.h>
#include <stdlib.h>

#define		IS_LOWER_CASE(x)		( ( (x) >= 'a' )  &&  ( (x) <= 'z' ) )
#define		TO_UPPERCASE(x)			( IS_LOWER_CASE(x) ? ( (x) - 'a' + 'A' ) : (x) ) 


void copy (char inName[], char outName[]);

void copy (char inName[], char outName[])
{
	FILE *in, *out;
	int  c;

	if ( (in = fopen (inName, "r"))  == NULL )
	{
		fprintf (stderr, "Can't open %s for reading.\n", inName);
		exit (EXIT_FAILURE);
	}

	if ( (out = fopen (outName, "w")) == NULL )
	{
		fprintf (stderr, "Can't open %s for writing.\n", outName);
		exit (EXIT_FAILURE);
	}


	while ( (c = getc (in))  !=  EOF )
	{
		c = TO_UPPERCASE (c);
		putc (c, out );
	}

	fclose (in);
	fclose (out);
}


int main (void)
{
	char inName[64], outName[64];

	printf("Enter name of file to be copied: ");
	scanf ("%63s", inName);

	printf("Entern name of output file: ");
	scanf ("%63s", outName);

	copy (inName, outName);

	return 0;
}
