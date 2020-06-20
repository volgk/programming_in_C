// Program to uppercase all characters in a string

#include <stdio.h>

int main (void)
{
	char string[] = "A fost, O daTa ca niciodata!";
	
	void uppercase (char string[]);

	printf("String before uppercase function:\n");
	printf("%s\n", string);

	uppercase (string);

	printf("String after uppercase function:\n");
	printf("%s\n", string);

	return 0;
}
	
	
void uppercase (char string[])
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a'  &&  string[i] <= 'z')
			string[i] = string[i] - 'a' + 'A';
	}
}
