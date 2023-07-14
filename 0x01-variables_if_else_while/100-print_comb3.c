#include <stdio.h>

/**
 * main - entry function
 * Return: return 0 on success
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
		for (j = i; j < 10; j++)
			if (i != j)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
