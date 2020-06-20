// Program to demonstrate static and automatic variables

#include <stdio.h>

void autoStatic (void)
{
	int        autoVar = 1;
	static int staticVar = 1;

	printf("automatic = %i, static = %i\n", autoVar, staticVar);

	autoVar++;
	staticVar++;
}


int main (void)
{
	int i;
	void autoStatic (void);

	for (i = 0; i < 5; i++)
		autoStatic ();

	return 0;
}
