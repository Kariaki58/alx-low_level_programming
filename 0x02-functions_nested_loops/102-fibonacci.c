#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum = 0, i;

	printf("%lu, %lu, ", fib1, fib2);
	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib2 = sum;
		fib1 = fib2;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
