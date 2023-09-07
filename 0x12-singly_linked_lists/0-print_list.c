#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - print list
 * @h: h
 * Return: len of element
 */
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	size_t len;

	if (!h)
		return (0);
	len = 0;
	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", node->len, node->str);
		len++;
		node = node->next;
	}
	return (len);
}
