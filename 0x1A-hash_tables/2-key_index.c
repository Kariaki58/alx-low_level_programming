#include "hash_tables.h"
/**
 * key_index - get the key index using the hash function
 * @key: key entry.
 * @size: size.
 * Return: the index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2((unsigned char *)key);
	return (index % size);
}
