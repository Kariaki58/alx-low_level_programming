#include "lists.h"

/**
 * list_len - length of a node
 * @h: input argument
 *
 * Return: return node_count
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t node_count;

	temp = h;
	node_count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		node_count++;
	}
	return (node_count);
}
