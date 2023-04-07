#include "lists.h"

/**
 * get_nodeint_at_index - function to get the node at an index
 * @head: head node.
 * @index: index of the node
 * Return: return node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	listint_t *_node;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	_node = (temp);
	return (_node);
}
