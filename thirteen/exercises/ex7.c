/* Program to test a macro that return a nonzero value if character
 * is an alphabetic character.
 */

#include <stdio.h>

#define		IS_LOWER_CASE(c)	( ((c) >= 'a')  &&  ((c) <= 'z') )
#define		IS_UPPER_CASE(c)	( ((c) >= 'A')  &&  ((c) <= 'Z') )
#define		IS_ALPHABETIC(c)	( (IS_LOWER_CASE(c))  ||  (IS_UPPER_CASE(c)) )

int main (void)
{
	
	if ( IS_ALPHABETIC ('f') )
		printf("The char is alphabetic.\n");
	else
		printf("The char isn't alphaberic.\n");


	if ( IS_ALPHABETIC ('9') )
		printf("The char is alphabetic.\n");
	else
		printf("The char isn't alphabetic.\n");

	return 0;
}
