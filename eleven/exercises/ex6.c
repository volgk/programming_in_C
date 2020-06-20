// Program to illustrate a dubly linked list

#include <stdio.h>

struct entry
{
	int value;
	struct entry *prev;
	struct entry *next;
};


int main (void)
{
	struct entry n0, n1, n2, n3, n4, new;
	struct entry *list = &n0, *n = &new;

	void rmEntry (struct entry *list, struct entry rmNext);
	void insertEntry (struct entry *list, struct entry insertNext, struct entry *new);

	n0.next   = &n1;
	n0.prev   = (struct entry *) 0;

	new.value = 111;

	n1.value  = 100;
	n1.prev   = &n0;
	n1.next   = &n2;

	n2.value  = 200;
	n2.prev   = &n1;
	n2.next   = &n3;

	n3.value  = 300;
	n3.prev   = &n2;
	n3.next   = &n4;

	n4.value  = 400;
	n4.prev   = &n3;
	n4.next   = (struct entry *) 0;

//	rmEntry (list, n3);
	insertEntry (list, n4, n);

	while (list !=  (struct entry *) 0)
	{
		if (list != &n0)
			printf("%i ", list->value);

		list = list->next;
	}

	printf("\n");

	return 0;
}


void rmEntry (struct entry *list, struct entry rmNext)
{
	while (list)
	{
		if (list->value == rmNext.value)
		{
			list->next = list->next->next;
			if (list->next)
				list->next->prev = list;
			break;
		}

		list = list->next;
	}
}


void insertEntry (struct entry *list, struct entry insertNext, struct entry *new)
{
	while (list)
	{
		if (list->value == insertNext.value)
		{
			new->next         = list->next;
			new->prev         = list;
			list->next       =  new;
			if (new->next)
				new->next->prev = new;
			break;
		}

		list = list->next;
	}
}
