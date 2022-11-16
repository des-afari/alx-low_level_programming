#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @size: size of array
 * @action: pointer
 * @array: array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n = 0;

	if (array != NULL && action != NULL)
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
}
