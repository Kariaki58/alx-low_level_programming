#include "lists.h"

/**
 * add_node - add a node to the start of a linked list
 * @head: address of the head node
 * @str: string to insert
 *
 * Return: return
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
