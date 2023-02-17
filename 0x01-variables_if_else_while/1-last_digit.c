#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 * main - Entry point
 *
 * Description: 'this is a function'
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_number = n % 10;

	if (last_number > 5)
	printf("Last digit of  %n is %d and is greater than 5\n", n, last_number);
	if (last_number == 0)
	printf("Last digit of %n is %d and is 0\n", n, last_number);
	if (last_number < 5)
	printf("Last digit of %n is %d and is less then 6 and not 0\n", n, last_number);	
	return (0);
}
