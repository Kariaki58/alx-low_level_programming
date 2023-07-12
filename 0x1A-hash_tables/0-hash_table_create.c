#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the table
 * Return: pointer to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	hash_table->size = size;
	if (hash_table->array == NULL)
	{
		free(hash_table->array);
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}