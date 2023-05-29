#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: always 0.
 */
int main(void)
{
	int i;
	long int prime_number = 612852475143;
	long int max_prime = -1;

	while (prime_number % 2 == 0)
	{
		max_prime = 2;
		prime_number /= 2;
	}
	for (i = 3; i <= sqrt(prime_number); i += 2)
	{
		while (prime_number % i == 0)
		{
			max_prime = i;
			prime_number /= i;
		}
	}
	if (prime_number > 2)
		max_prime = prime_number;
	printf("%ld\n", max_prime);
	return (0);
}
