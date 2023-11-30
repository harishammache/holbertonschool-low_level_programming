#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: first pointeur
 * @index: variable
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	while (index != 0)
	{
		index--;
		if (tmp == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			{
				tmp->next->prev = tmp->prev;
			}
	}
	return (1);
}
