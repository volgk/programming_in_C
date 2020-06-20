// Program to illustrate the right shift operation

#include <stdio.h>

int main (void)
{
	int a =  10;
	int b = -10;

	void bin (int number);

	printf("a = 10\n");
	bin (10 >> 1);

	printf("b = -10\n");
	bin (-10 >> 1);

	return 0;
}


void bin (int number) 
{ 
    unsigned i;

    for (i = 1 << 31; i > 0; i = i / 2) 
        (number & i)? printf("1"): printf("0");

	printf("\n");
} 
