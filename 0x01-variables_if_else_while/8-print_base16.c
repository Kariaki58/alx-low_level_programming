#include <stdio.h>

/**
 * main - Entry level
 * Return: return 0
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
