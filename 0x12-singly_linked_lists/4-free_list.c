#include "lists.h"

/**
 * free_list - free every thing in the list
 * @head: input of head
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
