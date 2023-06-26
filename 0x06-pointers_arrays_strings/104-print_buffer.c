#include <stdio.h>
#include <stdlib.h>

/**
 * print_buffer - print the buffer in a string
 * @b: string input
 * @size: input size 126.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (j = 0; j < size; j += 10)
	{
		printf("%08x: ", j);
		for (i = 0; i < 10; i++)
		{
			if ((i + j) >= size)
				putchar(' ');
			else
				printf("%02x", *(b + i + j));
			if ((i % 2) != 0 && i != 0)
				putchar(' ');
		}
		for (i = 0; i < 10; i++)
		{
			if ((i + j) >= size)
				break;
			else if (*(b + i + j) >= 31 && *(b + i + j) <= 126)
				printf("%c", *(b + i + j));
			else
				putchar('.');
		}
		if (i >= size)
			continue;
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
