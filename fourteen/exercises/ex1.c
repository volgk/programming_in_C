// Program to illustrate the using of typedef statement

#include <stdio.h>

int main (void)
{
	typedef int  (*FunctionPtr) (void);

	int function (void);
	
	FunctionPtr first = function; 

	printf("%i\n", first ());

	return 0;
}


int function (void)
{
	return 1;
}
