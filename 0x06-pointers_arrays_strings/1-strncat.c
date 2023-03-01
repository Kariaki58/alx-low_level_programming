#include "main.h"
#include <string.h>

/**
 * _strncat - concate a given string by n characters
 * @dest: the string destination
 * @src: the string src
 * @n: the number of characters to concat
 * Return: return the strncat
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
