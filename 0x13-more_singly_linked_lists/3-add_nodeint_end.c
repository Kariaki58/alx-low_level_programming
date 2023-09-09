#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: head
 * @n: n
 * Return: address of the new element;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *newnode;

	current = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL || head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = newnode;
	return (newnode);
}
