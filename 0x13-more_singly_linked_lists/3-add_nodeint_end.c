#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 * @head: pointer to the head of the list
 * @n: input interger
 * Return: newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

	temp = *head;
	newnode->n = n;
	newnode->next = NULL;
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return newnode;
	}
	
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
