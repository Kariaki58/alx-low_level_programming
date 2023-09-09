#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head
 * @index: index
 * Return: 1 if success -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *curr;
	int i;

	curr = *head;
	while (i < index)
	{
		prev = curr;
		curr = curr->next;
		i++;
	}
	prev->next = curr->next;
	free(curr);
	return (1);
}