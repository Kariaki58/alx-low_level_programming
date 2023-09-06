#include "function_pointers.h"

/**
 * print_name - name
 * @name: name
 * @f: f
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
