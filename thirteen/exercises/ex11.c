/* Program to test a macro that return a nonzero value if character
 * is a special character.
 */

#include <stdio.h>
#include <ctype.h>

#define		IS_LOWER_CASE(c)	( ((c) >= 'a')  &&  ((c) <= 'z') )
#define		IS_UPPER_CASE(c)	( ((c) >= 'A')  &&  ((c) <= 'Z') )
#define		IS_ALPHABETIC(c)	( (IS_LOWER_CASE(c))  ||  (IS_UPPER_CASE(c)) )
#define		IS_DIGIT(c)			( ((c) >= '0')  &&  ((c) <= '9') )
#define		IS_SPECIAL(c)	  (!( (IS_ALPHABETIC(c))  ||  (IS_DIGIT(c)) ))

int main (void)
{
	
	if ( IS_UPPER_CASE ('f') )
		printf("The char is uppercase.\n");
	else
		printf("The char isn't uppercase.\n");


	if ( IS_UPPER_CASE ('F') )
		printf("The char is uppercase.\n");
	else
		printf("The char isn't uppercase.\n");


	if ( IS_ALPHABETIC ('#') )
		printf("The char is alphabetic.\n");
	else
		printf("The char isn't alphabetic.\n");


	if ( IS_ALPHABETIC ('f') )
		printf("The char is alphabetic.\n");
	else
		printf("The char isn't alphabetic.\n");


	if ( IS_DIGIT ('f') )
		printf("The char is alphabetic.\n");
	else
		printf("The char isn't alphabetic.\n");


	if ( IS_DIGIT ('6') )
		printf("The char is digit.\n");
	else
		printf("The char isn't digit.\n");



	printf("===========================\n");



	if ( isupper ('u') )
		printf("The char is uppercase.\n");
	else
		printf("The char isn't upercase.\n");


	if ( isupper ('U') )
		printf("The char is uppercase.\n");
	else
		printf("The char isn't uppercase.\n");


	if ( isalpha ('6') )
		printf("The char is alphabetic.\n");
	else
		printf("The char isn't alphabetic.\n");


	if ( isalpha ('d') )
		printf("The char is alphabetic.\n");
	else
		printf("The char isn't alphabetic.\n");


	if ( isdigit ('d') )
		printf("The char is digit.\n");
	else
		printf("The char isn't digit.\n");


	if ( isdigit ('6') )
		printf("The char is digit.\n");
	else
		printf("The char isn't digit.\n");

	return 0;
}
