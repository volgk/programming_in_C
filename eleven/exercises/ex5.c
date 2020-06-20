// Program to illustrate a dubly linked list

#include <stdio.h>

struct entry
{
	int value;
	struct entry *previous;
	struct entry *next;
};


int main (void)
{
	struct entry n0, n1, n2, n3, n4;
	struct entry *list = &n1;

	n0.next = &n1;

	n1.value    = 100;
	n1.previous = &n0;
	n1.next     = &n2;

	n2.value    = 200;
	n2.previous = &n1;
	n2.next     = &n3;

	n3.value    = 300;
	n3.previous = &n2;
	n3.next     = &n4;

	n4.value    = 400;
	n4.previous = &n3;
	n4.next     = (struct entry *) 0;

	while (list)
	{
		if (list != &n0)
			printf("%i ", list->value);

		list = list->next;
	}

	printf("\n");

	return 0;
}
