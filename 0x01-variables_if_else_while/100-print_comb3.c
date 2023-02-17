#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
			}
			if (i == 9 && j == 9)
				continue;
			if (i < j)
			{
				if (i == 8 && j == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
