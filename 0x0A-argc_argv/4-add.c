#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 * Return: return 0 or 1
 */
int main(int ac, char **av)
{
	int i, sum = 0, status = 1;

	if (ac == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < ac; i++)
	{
		if (*(av[i]) < 58 && *(av[i]) > 48)
			sum += atoi(av[i]);
		else
			status = 0;
	}
	if (sum && status)
	{
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (0);
}
