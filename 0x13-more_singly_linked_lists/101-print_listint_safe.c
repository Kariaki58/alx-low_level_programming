#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list;
 * @head: head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	int number;
	int ouput;

	count = 0;
	while (head)
	{
		number = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (number > 0)
			head = head->next;
		else
		{
			ouput = head->next->n;
			printf("-> [%p] %d\n", (void *)head->next, ouput);
			break;
		}
	}
	return (number);
}
