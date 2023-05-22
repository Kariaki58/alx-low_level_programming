#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: return 0.
 */
int main(void)
{
	int i, j, status = 0;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if ((i % 10) == (j % 10))
				continue;
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (status)
			break;
	}
	putchar('\n');
	return (0);
}
