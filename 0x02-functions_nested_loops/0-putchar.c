#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	char put[] = "_putchar";
	int i;

	i = 0;
	while(put[i])
	{
		putchar(put[i++]);
	}
	putchar('\n');
	return (0);
}
