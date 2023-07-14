#include <stdio.h>

/**
 * main - entry point
 * Return: return 0.
 */
int main(void)
{
	unsigned long int first = 1, second = 2, add = 0, sum = 2;

	while (1)
	{
		add = first + second;
		if (add > 4000000)
			break;
		first = second;
		second = add;
		(!(second % 2)) ? sum += second : sum;
	}
	printf("%ld\n", sum);
	return (0);
}
