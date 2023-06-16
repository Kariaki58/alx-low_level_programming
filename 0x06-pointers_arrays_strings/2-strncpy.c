#include <string.h>
#include "main.h"

/**
 * _strncpy - str copy
 * @dest: dest
 * @src: src
 * @n: n
 * Return: copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
