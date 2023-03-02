#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - function to print out buffer
 * @b: function input
 * @size: function input 2
 */
void print_buffer(char *b, int size)
{
	int i, j;
	unsigned char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i+= 10)
	{
		printf("%08x ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				c = b[i + j];
				printf("%02x ", c);
			}
			else
				printf(" ");
		}
	}
	printf (" ");
	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
			c = b[i + j];
			if (isprint(c))
			{
				printf("%c", c);
			}
			else
			{
				printf(".");
			}
		}
	}
	printf("\n");
}
