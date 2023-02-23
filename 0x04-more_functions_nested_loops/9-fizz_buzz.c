#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, j;

	for (i = 1; i < 2; i++)
	{
		for (j = 1; j <= 100; j++)
		{
			if ((j % 3 == 0) && (j % 5 == 0))
			{
				printf("FizzBuzz");
				continue;
			}
			if (j % 3 == 0)
			{
				printf("Fizz");
				continue;
			}
			if (j % 5 == 0)
			{
				printf("Buzz");
				continue;
			}
			printf("%d", j);
			if (j != 100)
				printf(" ");
		}
	}
	printf("\n");
	return (0);
}
