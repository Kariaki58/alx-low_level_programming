#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	while (j <= 'Z')
	{
	putchar(j);
	j++;
	}
	putchar('\n');
	return (0);
}
