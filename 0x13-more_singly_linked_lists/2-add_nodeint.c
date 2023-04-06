#include "lists.h"

/**
 * add_nodeint - function that adds a new node at beginning of the list
 * @head: pointer to the head node
 * @n: input integer.
 * Return: return newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = temp;
	*head = newnode;
	return (newnode);
}
