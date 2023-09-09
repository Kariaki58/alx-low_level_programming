#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - find the length of a list
 * @h: h
 * Return: list length
 */
size_t listint_len(const listint_t *h)
{
	int len;
	const listint_t *current;

	current = h;
	len = 0;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
