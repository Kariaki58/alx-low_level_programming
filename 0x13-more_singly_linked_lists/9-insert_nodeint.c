#include "lists.h"

/**
 * insert_nodeint_at_index - return the index
 * @head: pointer to the head node
 * @idx: position
 * @n: number
 * Return: return address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i;

	newnode->n = n;
	newnode->next = NULL;
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
