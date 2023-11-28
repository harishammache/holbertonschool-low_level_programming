#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: name of the first pointeur
 *
 * Return: the number of element
*/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int number_of_elements = 0;

	while (h != NULL)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
