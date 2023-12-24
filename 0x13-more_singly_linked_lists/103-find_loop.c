#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head
 *
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr;
	listint_t *loop_loc;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (curr)
	{
		if (curr <= curr->next)
		{
			loop_loc = curr->next;
			break;
		}
		curr = curr->next;
	}
	if (!curr)
		return (NULL);
	return (loop_loc);
	/*listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}*/

	return (NULL);
}
