// Function to convert a string to an integer

#include <stdio.h>

float strToInt (const	char string[])
{
	int   i;
	float intValue, count = 1.0;
	float result = 0;

	for (i = 0; (string[i] >= '0'  &&  string[i] <= '9')  || \
			     string[i] == '-'; i++)
	{
		if (string[i] == '-')
			continue;
		else
		{
			intValue = string[i] - '0';
			result = result * 10 + intValue;
		}
	}

	printf("result = %f\n", result);

	for (; (string[i] >= '0'  &&  string[i] <= '9')  || \
			     string[i] == '.'; i++)
	{
		if (string[i] == '.')
			continue;
		else
		{
			count = count * 0.1;
			intValue = (string[i] - '0');
			result = result + intValue * count;
		}

	}

	if (string[0] == '-')
		return -result;
	else
		return  result;
}


int main (void)
{
	float strToInt (const char string[]);

	printf("%f\n", strToInt ("-867.6921") );
	printf("%f\n", strToInt ("100") + 25 );
	printf("%f\n", strToInt ("-13x5") );

	return 0;
}
