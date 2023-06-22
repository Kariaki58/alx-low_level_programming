#include "main.h"
#include <stdio.h>

/**
 * print_number - print the number in n
 * @n: number
 */
void print_number(int n)
{
	unsigned int store;
	unsigned int stack[32];
	int top = -1;

	store = n;
	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	if (n < 0)
	{
		store = -store;
		_putchar('-');
	}
	while (store)
	{
		stack[++top] = store % 10;
		store /= 10;
	}
	while (top >= 0)
	{
		_putchar(stack[top] + '0');
		top--;
	}
}
