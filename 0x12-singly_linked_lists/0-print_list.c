#include "lists.h"

/**
 * print_list - print the element in the node && return node_count
 * @h: a pointer to the head of the node
 * Return: return node_count
 */
size_t print_list(const list_t *h)
{
	size_t node_count;
	const list_t *temp;

	temp = h;
	node_count = 0;
	while (temp != NULL)
	{
		if (temp->str != NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		temp = temp->next;
		node_count++;
	}
	return (node_count);
}
