#include "main.h"

/**
 * _calloc - allocates space for an array
 *
 * @nmemb: integer
 *
 * @size: integer
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(size * nmemb);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		c[i] = '\0';

	return (c);
}
