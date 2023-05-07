#include "main.h"

/**
 * get_alphabet - get_alphabet
 */
void get_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
/**
 * print_alphabet_x10 - print alphabet 10x
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		get_alphabet();
}
