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
	unsigned long int mark;

	if (ht == NULL)
		return;
	printf("{");
	index = 0;
	mark = 0;
	while (index < ht->size)
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
		index++;
	}
	printf("}\n");
}
