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
<<<<<<< HEAD
	for (i = 0; i <= 98; i++)
=======
	for (i = 0; i < 98 - 2; i++)
>>>>>>> 783871730da5675738a1a2ec21eea2a34f487113
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
