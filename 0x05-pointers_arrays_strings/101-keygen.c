#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * main - print random password
 * Return: return 0 (success).
 */
int main()
{
	int lb, ub;
	lb = 20, ub = 100;
	srand(time(0));
	for (int i = 0; i < 20; i++)
	{
		int rand_num; = (rand() % ub - lb + 1) + lb;
		if (rand_num > 32 && rand_num < 127)
		{
			printf("%c", rand_num);
		}
	}
	printf("\n");

	return 0;
}
