#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: integer
 *
 * Return: None
 */

void *malloc_checked(unsigned int b)
{
	char *value;

	value = malloc(sizeof(int) * b);

	if (value != NULL)
	{
		return (value);
	}
	else
	{
		return (98);
	}
}
