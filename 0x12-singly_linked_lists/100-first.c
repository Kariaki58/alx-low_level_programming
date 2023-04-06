#include <stdio.h>
/**
 * myfunction - function
 */
void __attribute__((constructor)) myfunction()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
