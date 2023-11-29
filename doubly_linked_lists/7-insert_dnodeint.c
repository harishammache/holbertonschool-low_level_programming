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
	unsigned int index = 0;

	temp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
	{
		*h = new_node;
	}
	else
	{
		while (index < idx)
		{
			temp = temp->next;
			index++;
		}
		temp->next = new_node;
	}
	return (new_node);
	free(new_node);
}
