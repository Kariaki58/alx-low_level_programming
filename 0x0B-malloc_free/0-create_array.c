#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to print the buffer of a string
 * @size: input size of memory to allocate
 * @c: input character to fill the allocated memeory
 * Return: on success mem_alloc on failure NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *mem;
	unsigned int i;

	if (size == 0)
		return NULL;
	mem = malloc(size);
	for (i = 0; i < size; i++)
	{
		mem[i] = c;
	}
	return mem;
}
