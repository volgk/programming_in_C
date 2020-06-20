// Program to sort a dictionary in alphabetical order

#include <stdio.h>

struct entry
{
	char word[15];
	char definition[50];
};


int main (void)
{
	int i, len;
	struct entry dc[10] =
	{
			{ "abys",     "a bottomless pit"                  },
			{ "affix",    "to append; attach"                 },
			{ "acumen",   "mentally sharp; keen"              },
			{ "ajar",     "partially opened"                  },
			{ "aerie",    "a high nest"                       },
			{ "aardvark", "a burrowing African mammal"        },
			{ "agar",     "a jelly made from seaweed"         },
			{ "ahoy",     "a nautical call of greeting"       },
			{ "aigrette", "an ornamental cluster of feathers" },
			{ "addle",    "to become confuzed"                }
	};

	void sortDc (int len, struct entry dc[]);

	sortDc (len, dc);
	
	return 0;
}


void printfMassiv (int len, struct entry dc[ len ])
{
	int i;

	for (i = 0; i < len; i++)
		printf("%s\t\t%s\n", dc[i].word, dc[i].definition);
}


void sortDc (int len, struct entry dc[ len ])
{
	struct  entry temp[ len ];
	int     i, j;

	void printfMassiv (int len, struct entry dc[ len ]);

//	for (i = 0; i < len; i++)
	printfMassiv (len, dc);
}
