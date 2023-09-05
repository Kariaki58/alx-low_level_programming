#include "main.h"
#include <stdlib.h>

/**
 * _calloc - using calloc
 * @nmemb: nmemb
 * @size: size
 * Return: return ptr.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
