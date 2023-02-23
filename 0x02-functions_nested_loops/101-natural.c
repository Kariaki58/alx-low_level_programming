#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		int val1 = 3 * i;
		int val2 = 5 * i;

		if (val1 < 1024)
		{
			sum += val1;
		}
		if (val2 < 1024)
		{
			sum += val2;
		}
	}
	printf("%d\n", sum);
	return (0);
}
