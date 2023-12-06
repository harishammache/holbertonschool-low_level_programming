#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_create -  creates a hash table
 * @size: variable unsigned long int
 *
 * Return: a pointer to the newly created hash table
 *			If something went wrong, your function should return NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;

	table->array = malloc(sizeof(table->array) * size);

	if (table->array == NULL)
	{
		return (NULL);
	}
	return (table);
}
