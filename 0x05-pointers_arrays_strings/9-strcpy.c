#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> 8327161830ab02db163a31e3bb8597491914895d
/**
 * _strcpy - Copy a string
 *
 * @dest: Destination value
 *
 * @src: Source value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
