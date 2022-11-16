#include "main.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @size: size of array
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n = 0;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
