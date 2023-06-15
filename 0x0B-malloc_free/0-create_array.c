#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size n
 * @size: size of the aray
 * @c: char
 *
 * Return: string.
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	buffer = malloc((size + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		buffer[i] = c;
		i++;
	}
	return (buffer);
}
