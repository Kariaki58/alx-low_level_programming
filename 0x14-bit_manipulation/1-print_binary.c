#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary
 * @n: long int n
 */
void print_binary(unsigned long int n)
{
	int i, pad = 0;

	for (i = 63; i >= 0; i--)
	{
		if (((n >> i) & 1) != 0)
		{
			printf("1");
			pad++;
		}
		else if (pad)
			printf("0");
	}
	if (pad == 0)
		printf("0");
}
