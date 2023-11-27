#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a list
 * @h: name of the first pointeur
 *
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int number_of_nodes = 0;

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
