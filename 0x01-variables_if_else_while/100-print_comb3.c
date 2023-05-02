#include <stdio.h>

/**
 * main - Entry main
 * Return: return 0
 */
int main(void)
{
	int status = 1, j, i;

	for (i = 0; i < 10; i++)
	{
		if (status == 0)
		{
			break;
		}
		for (j = i; j < 10; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
				{
					status = 0;
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
