#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - add a node at the beginning of a list
 * @head: head
 * @n: n
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
