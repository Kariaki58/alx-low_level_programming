#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delete all memory in the hash
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *move;
	hash_node_t *curr;
	hash_node_t *next;
	unsigned long int index;

	if (!ht)
		return;
	index = 0;
	while (index  < ht->size)
	{
		move = ht->array[index];
		curr = move;
		while (curr != NULL)
		{
			next = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
