#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
*/
size_t print_list(const list_t *h)
{
	unsigned int number_of_nodes;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
