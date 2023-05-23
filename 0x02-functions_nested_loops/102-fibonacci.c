#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0.
 */
int main(void)
{
	unsigned long int i, a = 1, b = 2, c;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld", c);
		if (i < 47)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
