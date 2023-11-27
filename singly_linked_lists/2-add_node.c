#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @str: constant pointer
 * @head: it is pointer to a pointer
 *
 * Return: the adress of the new element if success and NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
{
	int index = 0;
	list_t *new_node;

	while (str[index] != '\0')
	{
		index++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = index;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
	free(new_node);
}
