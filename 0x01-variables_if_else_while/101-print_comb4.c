#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	int i, j, k, status = 0;

	for (i = 0; i < 10; i++)
	{
		if (status)
			break;
		for (j = i; j < 10; j++)
		{
			if (status)
				break;
			if (i == j)
				continue;
			for (k = j; k < 10; k++)
			{
				if (j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
					{
						status = 1;
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
