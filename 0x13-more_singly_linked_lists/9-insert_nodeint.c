#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at the index
 * @head: pointer to the head node
 * @idx: index position to insert new node
 * @n: number in the linked list
 * Return: statement
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *prev;
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
	unsigned int i;

	i = 0;
	if (head == NULL || *head == NULL || newnode == NULL || !idx)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		temp->next = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	else
	{
		for (i = 0; i < idx; i++)
		{
			if (temp == NULL || temp->next == NULL)
				break;
			prev = temp;
			temp = temp->next;
		}
		prev->next = newnode;
		newnode->next = temp;
		return (newnode);
	}
	return (NULL);
}
