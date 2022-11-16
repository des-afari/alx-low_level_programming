#include "main.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: integer
 * @cmp: function pointer
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;
	int result;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (n = 0; n < size; n++)
		{
			result = cmp(array[n]);
			n++;

			if (result != 0)
			{
				return (n);
			}
		}
		return (-1);
	}
}
