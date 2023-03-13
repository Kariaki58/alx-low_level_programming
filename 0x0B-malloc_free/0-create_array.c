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
	if (size)
	{
		char *mem_alloc;
		int i = 0;

		for (; i < size; i++)
		{
			mem_alloc[i] = c;
		}
		return (mem_alloc);
	}
	return (NULL);
}
