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

	value = malloc(b);

	if (value != NULL)
	{
		return (value);
	}
	else
	{
		exit(98);
	}
}
