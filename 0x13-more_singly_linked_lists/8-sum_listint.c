#include "lists.h"

/**
 * sum_listint - return sum of all the number in a linked list
 * @head: pointer to head node
 * Return: return sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	temp = head;
	sum = 0;
	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
