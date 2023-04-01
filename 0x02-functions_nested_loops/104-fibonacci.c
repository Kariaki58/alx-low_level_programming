#include <stdio.h>

/**
 * main - function for larg fibonnaci number
 * Return: return 0;
 */
int main(void)
{
	unsigned long int fib_1, fib_2, fib_cal, i;

	fib_1 = 1;
	fib_2 = 2;
	printf("%ld, ", fib_1);
	printf("%ld, ", fib_2);
	for (i = 0; i <= 98; i++)
	{
		fib_cal = fib_1 + fib_2;
		fib_1 = fib_2;
		fib_2 = fib_cal;
		printf("%ld", fib_cal);
		if (i < 98 - 3)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
