#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: first pointeur
 *
 * Return: 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
