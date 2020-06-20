// Program to sort three nods using pointers

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int  a = 3,  b = -15, c = -4;
	int *ap = &a, *bp = &b, *cp = &c;
	
	void sort3 (int *a, int *b, int *c);

	sort3 (ap, bp, cp);

	printf("a = %i, b = %i, c = %i\n", *ap, *bp, *cp);

	return 0;
}


void sort3 (int *a, int *b, int *c)
{
	bool compare (int *a, int *b, int *c);

	while (compare (a, b, c));
}


bool compare (int *a, int *b, int *c)
{
	void swap (int *val1, int *val2);

	if (*a > *b)
	{
		swap (a, b);
		return true;
	}
	else if (*b > *c)
	{
		swap (b, c);
		return true;
	}
	else
		return false;
}


void swap (int *val1, int *val2)
{
	int tmp;

	tmp   = *val1;
	*val1 = *val2;
	*val2 = tmp;
}
