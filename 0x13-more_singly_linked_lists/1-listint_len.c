#include "lists.h"

/**
 * listint_len - function that returns the number os elements in a linked list
 * @h: head node
 * Return: return number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
