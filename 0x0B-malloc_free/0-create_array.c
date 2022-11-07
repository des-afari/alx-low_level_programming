#include "main.h"

/**
 * create_array - function to create an array of chars
 *
 * @c: outside character
 *
 * @size: size of array
 *
 * Return: Always 0 (success)
 *
 */

char *create_array(unsigned int size, char c)
{
	char *temp;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	temp = malloc(sizeof(char) * size);

	if (temp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		temp[i] = c;
	}

	return (temp);
}
