// Program to sort a dictionary in alphabetical order

#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[15];
	char definition[50];
};
static int len = 10;

int main (void)
{
	struct entry dc[10] =
        {
                { "abys",     "a bottomless pit"                  },
                { "affix",    "to append; attach"                 },
                { "agar",     "a jelly made from seaweed"         },
                { "aardvark", "a burrowing African mammal"        },
                { "ahoy",     "a nautical call of greeting"       },
                { "aerie",    "a high nest"                       },
                { "aigrette", "an ornamental cluster of feathers" },
                { "addle",    "to become confuzed"                },
                { "acumen",   "mentally sharp; keen"              },
                { "ajar",     "partially opened"                  }
        };

	void sort         (struct entry dc[]);
	void printfMassiv (struct entry dc[]);

	printf("Before sort:\n");
	printfMassiv (dc);

	sort (dc);

	printf("\nAfter sort:\n");
	printfMassiv (dc);
	
	return 0;
}


void printfMassiv (struct entry dc[])
{
	int i;

	for (i = 0; i < len; i++)
		printf("%s\t\t%s\n", dc[i].word, dc[i].definition);
}


void sort (struct entry dc[])
{	
	int  i;
	void swap (int i, struct entry dc[]);
	bool compare (char word1[], char word2[]);

	for (i = 0; i < len - 1; i ++)
		if ( compare (dc[i].word, dc[i+1].word) )
		{
			swap (i, dc);
			sort (dc);
		}
}


bool compare (char word1[], char word2[])
{
	int  i;
	bool swap;

	for (i = 0; word1[i] != '\0'  ||  word2[i] != '\0'; i++)
	{
		if (word1[i] == word2[i])
			continue;
		else if (word1[i] > word2[i])
			return swap = true;
		else
			return swap = false;
	}
}


void swap (int i, struct entry dc[])
{
	struct entry tmp[10];

	tmp[i]  = dc[i];
	dc[i]   = dc[i+1];
	dc[i+1] = tmp[i];
}
