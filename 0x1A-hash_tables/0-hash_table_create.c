#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the table.
 * Return: returns a hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int i = 0;

	hash_t = malloc(sizeof(hash_node_t));
	if (!hash_t)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(size * sizeof(hash_node_t *));

	if (!(hash_t->array))
		return (NULL);
	return (hash_t);
}
