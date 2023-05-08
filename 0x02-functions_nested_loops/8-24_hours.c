#include "main.h"

/**
 * jack_bauer - jack timmer starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int k, j;

	for (k = 0; k < 24; k++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
