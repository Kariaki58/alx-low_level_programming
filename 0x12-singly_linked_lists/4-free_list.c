#include "lists.h"

/**
 * free_list - free a list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
