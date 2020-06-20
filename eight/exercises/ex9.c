// Program to find the least multiple of two integers

#include <stdio.h>

int gcd (int u, int v)
{
	int temp;

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}


int lcd (int u, int v)
{
	int result;

	result = u*v / gcd (u, v);

	return result;
}


int main (void)
{
	int u, v;

	printf("Type the u and v values (u,v >= 0): ");
	scanf("%i %i", &u, &v);

	if (u < 0  ||  v < 0)
		printf("The condition u,v >= 0 is not respected.\n");
	else
		printf("lcd(%i, %i) = %i\n", u, v, lcd (u, v));

	return 0;
}
