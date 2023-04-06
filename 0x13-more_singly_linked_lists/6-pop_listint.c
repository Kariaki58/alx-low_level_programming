#include "lists.h"

/**
 * pop_listint - listint deletes the head node
 * @head: pointer to the head node
 * Return: return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL || *head == NULL)
		return (0);
	else
	{
		temp = *head;
		value = temp->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (value);
	}
}
