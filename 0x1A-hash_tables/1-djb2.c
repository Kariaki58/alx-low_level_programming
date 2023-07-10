#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_djb2 - hash function using djb2 algorithm.
 * @str: get the string.
 * Return: an index in the hash_table.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
