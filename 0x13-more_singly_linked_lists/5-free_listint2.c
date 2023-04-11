#include "lists.h"

/**
 * free_listint2 - function that free memory
 * @head: pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	temp = *head;
	while (temp != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}