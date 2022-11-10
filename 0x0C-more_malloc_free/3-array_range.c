#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: integer
 *
 * @max: integer
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	char *arr;
	int n, i;
	int j = 0;

	n = max - min + 1;

	arr = malloc(sizeof(int) * n);

	if (min > max)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}
