#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (char j = 'a'; j < 'g'; j++)
	{
		putchar(j);
	}
	return (0);
}
