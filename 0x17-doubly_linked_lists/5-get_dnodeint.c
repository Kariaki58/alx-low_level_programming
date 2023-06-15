#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_t - function that returns the nth node
 * @head: head node
 * @index: index
 * Return node[index]
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (temp->next != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
		return (NULL);
	return temp;
}
