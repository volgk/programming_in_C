/* Program to test a macro that return a nonzero value if character
 * is an uppercase letter.
 */

#include <stdio.h>

#define		IS_UPPER_CASE(c)	( ((c) >= 'A')  &&  ((c) <= 'Z') )

int main (void)
{
	char ch1 = 'f';
	char ch2 = 'F';

	if ( IS_UPPER_CASE (ch2) )
		printf("Char %c is uppercase.\n", ch2);
	else
		printf("Char %c isn't uppercase.\n", ch2);

	return 0;
}
