// Program to include a new entry in a linked list

#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};


int main (void)
{

	struct entry begin, n1, n2, n3, new;
	struct entry *list = &begin;

	void insertEntry (struct entry *list, struct entry nextTo, struct entry new);

	begin.next = &n1;

	n1.value = 100;
	n1.next  = &n2;

	n2.value = 200;
	n2.next  = &n3;

	n3.value = 300;
	n3.next  = (struct entry *) 0;

	new.value = 250;
	
	insertEntry (list, begin, new);

	while (list != (struct entry *) 0)
	{
		if (list != &begin)
		{
			printf("%i ", list->value);
		}
		list = list->next;
	}

	printf("\n");

	return 0;
}


void insertEntry (struct entry *list, struct entry nextTo, struct entry new)
{
	while (list != (struct entry *) 0)
	{
		if (list->value == nextTo.value)
		{
			new.next   = list->next;
			list->next = &new;
		}
		
		list = list->next;
	}
}
