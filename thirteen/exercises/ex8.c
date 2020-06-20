/* Program to test a macro that return a nonzero value if character
 * is a special character.
 */

#include <stdio.h>

#define		IS_LOWER_CASE(c)	( ((c) >= 'a')  &&  ((c) <= 'z') )
#define		IS_UPPER_CASE(c)	( ((c) >= 'A')  &&  ((c) <= 'Z') )
#define		IS_ALPHABETIC(c)	( (IS_LOWER_CASE(c))  ||  (IS_UPPER_CASE(c)) )
#define		IS_DIGIT(c)			( ((c) >= '0')  &&  ((c) <= '9') )
#define		IS_SPECIAL(c)	  (!( (IS_ALPHABETIC(c))  ||  (IS_DIGIT(c)) ))

int main (void)
{
	
	if ( IS_SPECIAL ('f') )
		printf("The char is special.\n");
	else
		printf("The char isn't special.\n");


	if ( IS_SPECIAL ('9') )
		printf("The char is special.\n");
	else
		printf("The char isn't special.\n");


	if ( IS_SPECIAL ('#') )
		printf("The char is special.\n");
	else
		printf("The char isn't special.\n");



	return 0;
}
