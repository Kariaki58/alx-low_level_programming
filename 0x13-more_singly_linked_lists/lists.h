#ifndef __MAIN__
#define __MAIN__

#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - linked list
 * @n: int input
 * @next: next pointer to node
 * Description: singly linked list
 */

typedef struct list_s
{
	int n;
	struct list_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

#endif
