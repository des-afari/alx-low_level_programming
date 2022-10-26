#include "main.h"

/**
 * *_strcat - concatenate two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: 0 (Success)
 *
 */

char *_strcat(char *dest, char *src)
{
	int a = 0; int i;

	while (dest[a])
	{
		a++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[a] = src[i];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}


