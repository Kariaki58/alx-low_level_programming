#include <stdio.h>

/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
		for (j = i; j < 10; j++)
			for (k = j; k < 10; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar((k % 10) + '0');
					if (i == 7 && j == 8 && k == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
