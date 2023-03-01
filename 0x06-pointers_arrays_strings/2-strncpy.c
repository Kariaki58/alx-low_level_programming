#include "main.h"
#include <string.h>

/**
 * _strncpy - function to copy string
 * @dest: the string destination
 * @src: the string src
 * @n: the number of string characters to copy
 * Return: return a copy of dest and src
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
