#include "variadic_functions.h"

/**
 * print_strings: print strings
 * @separator: separator
 * @n: n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(list, char *));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}
