#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointeur
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *delete_node, *current;
	unsigned long int index = 0;

	while (index < ht->size)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			delete_node = current;
			current = current->next;
			free(delete_node->key);
			free(delete_node->value);
			free(delete_node);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
