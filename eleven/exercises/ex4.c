// Program to remove an entry from a linked list

#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};


int main (void)
{
	struct entry n0, n1, n2, n3;
	struct entry *list = &n0;

	void rmEntry (struct entry *list, struct entry toRemove);

	n0.next = &n1;

	n1.value = 100;
	n1.next  = &n2;

	n2.value = 200;
	n2.next  = &n3;

	n3.value = 300;
	n3.next  = (struct entry *) 0;

	rmEntry (list, n0);

	while (list)
	{
		if (list != &n0)
			printf("%i ", list->value);

		list = list->next;
	}

	printf("\n");

	return 0;
}


void rmEntry (struct entry *list, struct entry toRemove)
{
	while (list)
	{
		if (list->value == toRemove.value)
			list->next = (list->next)->next;

		list = list->next;
	}
}
