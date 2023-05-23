#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0.
 */
int main(void)
{
	unsigned long int i, a = 1, b = 2, c, sum = 0;

	sum = a + b;
	for (i = 0; i < 31; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c <= 4000000)
		{
			if (c % 2 == 0)
			{
				sum += c;
			}
		}
	}
	printf("%ld\n", sum);
	return (0);
}
