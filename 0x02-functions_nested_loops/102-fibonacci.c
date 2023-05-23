#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0.
 */
int main(void)
{
	int i, a = 1, b = 2, c;

	printf("%d, %d, ", a, b);
	for (i = 0; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
		if (i < 50)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
