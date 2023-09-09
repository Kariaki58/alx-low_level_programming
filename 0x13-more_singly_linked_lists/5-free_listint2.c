#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;
	curr = *head;
	while (curr)
	{
		*head = curr;
		curr = curr->next;
		free(*head);
	}
	*head = NULL;
}
