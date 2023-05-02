#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: return 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
