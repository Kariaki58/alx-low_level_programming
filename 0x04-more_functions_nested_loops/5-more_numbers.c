#include "main.h"

/**
 * num_ones - print the number from 0 - 14
 */
void num_ones(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
}
/**
 * more_numbers - prints 14 times the numbers
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		num_ones();
		_putchar('\n');
	}
}
