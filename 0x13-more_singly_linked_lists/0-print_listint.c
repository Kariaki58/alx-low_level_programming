#include "lists.h"

/**
 * print_listint - function to print the element in linked list
 * @h: the head node
 * Return: return node count.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_num;

	node_num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	return (node_num);
}
