#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - the malloc function
 * @b: input number
 * Return: return the pointer to the memeory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
