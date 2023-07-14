#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: return 0. success
 */
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
	{
		(!(i % 3) || !(i % 5)) ? sum += i : sum;
	}
	printf("%d\n", sum);
	return (0);
}
