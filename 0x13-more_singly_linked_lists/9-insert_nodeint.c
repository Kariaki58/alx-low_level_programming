#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert a node at index
 * @head: head
 * @idx: index
 * @n: n
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *curr, *prev, *newnode;

	if (*head == NULL || head == NULL)
		return (NULL);
	curr = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx && curr; i++)
	{
		prev = curr;
		curr = curr->next;
	}
	if (prev->next == NULL)
		return (NULL);
	prev->next = newnode;
	newnode->next = curr;
	return (newnode);
}
