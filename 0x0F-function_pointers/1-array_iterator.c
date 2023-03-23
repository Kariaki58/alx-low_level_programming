#include "function_pointers.h"
/**
 * array_iterator - execute function on each element
 * of an array
 * @array: given array
 * @size: size of the array
 * @action: pointer to function
 * Return: value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array  != NULL)
	{
		size_t i;
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
