#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - print the hash table.
 * @ht: hash table address in memory
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *move;
	unsigned long int index;
	unsigned long int mark = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		move = ht->array[index];
		while (move != NULL)
		{
			if (mark)
			{
				putchar(',');
				putchar(' ');
			}
			printf("'%s': '%s'", move->key, move->value);
			if (mark == 0)
				mark = 1;
			move = move->next;
		}
	}
	printf("}\n");
}
