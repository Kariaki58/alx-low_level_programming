#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: hash table size
 * Return: return hash table address.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_t = malloc(sizeof(hash_node_t));
    unsigned long int i = 0;

    if (!hash_t)
        return (NULL);
    hash_t->size = size;
    hash_t->array = malloc(size * sizeof(hash_node_t *));
    if (!(hash_t->array))
    {
        free(hash_t);
        return (NULL);
    }
    while (i < size)
        hash_t->array[i++] = NULL;
    return (hash_t);
}
