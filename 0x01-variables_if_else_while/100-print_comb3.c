#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			if (digit1 != digit2 && digit2 != 0)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
			}
			if (digit1 == 9 && digit2 == 9)
				continue;
			if (digit1 != digit2 && digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
