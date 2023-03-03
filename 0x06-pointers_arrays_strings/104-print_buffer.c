#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_buffer - function to print out buffer
 * @b: function input
 * @size: function input 2
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10 && j < size; j++)
		{
			printf("%02x", (unsigned char)b[j]);
			if (j % 2 == 1)
			{
				printf(" ");
			}
		}
		for (; j < i + 10; j++)
		{
			printf(" ");
			if (j % 2 == 1)
			{
				printf(" ");
			}
		}
		printf(" ");
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= ' ' && b[j] <= '~')
			{
				printf("%c", b[j]);
			}
			else
				printf(".");
		}
	}
	printf("\n");
}
