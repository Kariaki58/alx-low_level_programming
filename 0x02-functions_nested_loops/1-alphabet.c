#include "main.h"
#include <stdio.h>
/**
 * main - hello world
 * Return: 0
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
