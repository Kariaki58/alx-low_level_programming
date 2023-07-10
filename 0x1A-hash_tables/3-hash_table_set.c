#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_node - create a new node
 * @key: key
 * @value: value
 * Return: return new node.
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *Node;

	Node = malloc(sizeof(hash_node_t));
	if (!Node)
		return (NULL);
	Node->key = strdup(key);
	Node->value = strdup(value);
	Node->next = NULL;
	return (Node);
}
/**
 * hash_table_set - set the nodes in the hash table
 * @ht: hash table
 * @key: hash key
 * @value: return key @index.
 * 
 * Return: get the value.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *Node;
	unsigned long int index;

	if (!ht || *key == '\n' || *value == '\n')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	Node = ht->array[index];
	if (!Node)
	{
		new_node = create_node(key, value);
		if (!new_node)
			return (0);
		ht->array[index] = new_node;
		return (1);
	}
	while (Node)
	{
		if (!(strcmp(key, Node->key)))
		{
			free(Node->value);
			Node->value = strdup(value);
			return (1);
		}
		Node = Node->next;
	}
	new_node = create_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}