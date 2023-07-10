#include "hash_tables.h"

/**
 * create_node - create a new node.
 * @key: node key
 * @value: node value
 * Return: new node
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *newnode = malloc(sizeof(hash_node_t));

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	return (newnode);
}
/**
 * hash_table_set - set a node in the hash table
 * @ht: hash table
 * @key: where the node should be stored
 * @value: get the value @key
 * Return: hash set.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t* newnode;
	hash_node_t *Node;
	unsigned long int index;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	Node = ht->array[index];
	if (!Node)
	{
		newnode = create_node(key, value);
		if (!newnode)
			return (0);
		ht->array[index] = newnode;
		return (1);
	}
	while (Node != NULL)
	{
		if (strcmp(key, Node->key) == 0)
		{
			free(Node->value);
			Node->value = strdup(value);
			return (1);
		}
		Node = Node->next;
	}
	newnode = create_node(key, value);
	if (!newnode)
		return (0);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}