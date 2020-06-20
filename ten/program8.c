// Program to count words in a piece of text

#include <stdio.h>
#include <stdbool.h>


// alphabetic function

bool alphabetic (const char c)
{
	if ( (c >= 'a'  &&  c <= 'z')  ||  (c >= 'A'  &&  c <= 'Z') )
		return true;
	else
		return false;
}


// readLine function

void readLine (char buffer[])
{
	char character;
	int  i = 0;

	do
	{
		character = getchar();
		buffer[i] = character;
		i++;
	}
	while (character != '\n');

	buffer[i-1] = '\0';
}


// countWords function

int countWords (const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic (const char c);

	for (i = 0; string[i] != '\0'; i++)
	{
		if (alphabetic (string[i]) )
		{
			if (lookingForWord)
			{
				wordCount++;
				lookingForWord = false;
			}
		}

		else
			lookingForWord = true;
	}

	return wordCount;
}


int main (void)
{
	char text[81];
	int  totalWords = 0;
	int  countWords (const char string[]);
	void readLine (char buffer[]);
	bool endOfText = false;
	
	printf("Type your text: ");
	printf("When you are done, press 'RETURN'.\n\n");

	while (! endOfText)
	{
		readLine (text);

		if (text[0] == '\0')
			endOfText = true;
		else
			totalWords += countWords (text);
	}
	
	printf("\nThere are %i words in the above text.\n", totalWords);

	return 0;
}
