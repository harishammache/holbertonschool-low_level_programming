#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: first pointeur
 * @index: compt the number of node
 *
 * Return: NULL if node doesn't exist, returns the nth node if success
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL && node < index)
	{
		head = head->next;
		node++;
	}
	return (head);
}
