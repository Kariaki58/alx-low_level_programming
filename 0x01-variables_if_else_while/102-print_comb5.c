#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i1, i2, j1, j2;

	for (i1 = 0; i1 < 10; i1++)
	{
		for (i2 = 0; i2 < 9; i2++)
		{
			for (j1 = 0; j1 < 10; j1++)
			{
				for (j2 = 0; j2 < 10; j2++)
				{
				if (i1 == i2 && j1 == j2)
					continue;
				putchar(i1 + '0');
				putchar(i2 + '0');
				putchar(' ');
				putchar(j1 + '0');
				putchar(j2 + '0');
				if (j1 == 9 && j2 == 9)
					break;
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
