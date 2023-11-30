#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: pointeur to the pointeur
 * @idx: index of the list where the new node should be added
 * @n: integer
 *
 * Return: the adress of the new node , NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;

	temp = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while(idx != 1)
	{
		temp = temp->next;
		idx--;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next = new_node;
	new_node->next->prev = new_node;

	return (new_node);
}
