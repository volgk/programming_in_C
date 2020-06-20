// Program to look up in dictionary with pointers

#include <stdio.h>

struct entry
{
	char word[15];
	char definition[50];
};


int main (void)
{
	struct entry dictionary[100] =
        {
                { "aardvark", "a burrowing African mammal"        },
                { "abys",     "a bottomless pit"                  },
                { "acumen",   "mentally sharp; keen"              },
                { "addle",    "to become confuzed"                },
                { "aerie",    "a high nest"                       },
                { "affix",    "to append; attach"                 },
                { "agar",     "a jelly made from seaweed"         },
                { "ahoy",     "a nautical call of greeting"       },
                { "aigrette", "an ornamental cluster of feathers" },
                { "ajar",     "partially opened"                  }
		};

	int  lookup (struct entry dictionary[], char * const search,
		         const int    entries);

	int  entries = 10;
	char word[15];
	int  entry;

	printf("Enter the word: ");
	scanf ("%14s", word);

	entry = lookup (dictionary, word, entries);

	if (entry != -1)
		printf("%s\n", (dictionary+entry)->definition);
	else
		printf("Sorry, the word %s is not in may dictionary.\n",
				dictionary->word);

	return 0;
}


// Function to compare strings using pointers

int cmpStr (char *s1, char *s2)
{
	while ( *s1 == *s2  &&  *s1 != '\0')
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return 0;
	else if (*s1 < *s2)
		return -1;
	else
		return 1;
}


// Function to look up a word inside a dictionary

int lookup (struct entry dictionary[], char * const search,
		    const int    entries)
{
	int low = 0;
	int high = entries - 1;
	int mid, result;

	int cmpStr (char *s1, char *s2);

	while (low <= high)
	{
		mid = (low + high) / 2;
		result = cmpStr ( (dictionary + mid)->word, search );

		if (result == -1)
			low = mid+1;
		else if (result == 1)
			high = mid-1;
		else
			return mid;
	}

	return -1;
}
