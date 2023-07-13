#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - get the value at an index
 * @ht: hash table
 * @key: hash key
 * Return: data
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (*key == '\n')
		return (NULL);
	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
