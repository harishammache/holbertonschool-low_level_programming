#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @n: constant integer
 * @head: it is pointer to a pointer
 *
 * Return: the adress of the new element if success and NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	if (head != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
	free(new_node);
}
