#include <stdio.h>
#include <math.h>

/**
 * check_prime - check if prime
 * @n: n
 * Return: 0 | 1
 */
int check_prime(int n)
{
	int check, status;

	check = 2;
	status = 1;
	while (!(n % check) && status)
	{
		status = 0;
		check++;
	}
	if (check == 2 || n == 2)
		return (1);
	return (0);
}

/**
 * main - entry point
 * Return: always 0.
 */
int main(void)
{
	long int i, n;

	n = 612852475143;
	for (i = 2; i <= n && n > 0;)
	{
		if (check_prime(i))
		{
			if (!(n % i))
				n /= i;
			else
				i++;
		}
		else
			i++;
	}
	printf("%ld\n", i);
	return (0);
}
