#ifndef __MAIN__
#define __MAIN__

#include <stdlib.h>
#include <stdio.h>

/**
 * list_int - singly linked list
 * @n: int data type
 * @next: go to the next node
 */
typedef struct list_t
{
	int n;
	struct list_t *next;
} listint_t;
size_t print_listint(const listint_t *h);

#endif
