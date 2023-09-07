#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - add a node at the beginning of a list
 * @head: head
 * @str: str
 * Return: nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
