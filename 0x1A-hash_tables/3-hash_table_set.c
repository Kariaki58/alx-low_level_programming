#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - create new node
 * @key: key
 * @value: value
 * Return: return 0
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - set a node in the table.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return:  1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode;
	hash_node_t *current;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);
	newNode = create_node(key, value);
	index = key_index((unsigned char *)key, ht->size);
	if (newNode == NULL)
		return (0);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
		return (1);
	}
	else
	{
		current = ht->array[index];
		newNode->next = current;
		ht->array[index] = newNode;
	}
	return (1);
}
