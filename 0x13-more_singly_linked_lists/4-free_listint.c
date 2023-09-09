#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *cur;

	cur = head;
	while (cur)
	{
		head = cur;
		cur = cur->next;
		free(head);
	}
}
