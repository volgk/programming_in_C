// Program to include a new entry in a linked list

#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};


int main (void)
{
	struct entry n1, n2, n3, n1_2;
	struct entry *listStart = &n1, *listItem;

	n1.value = 100;
	n1.next  = &n2;

	n2.value = 200;
	n1.next  = &n3;

	n3.value = 300;
	n3.next  = (struct entry *) 0;

	n1_2.value = 150;

	for (listItem = listStart; listItem !=  0; listItem++)
	{
		printf("%i ", listItem -> value);
	}

	return 0;
}
