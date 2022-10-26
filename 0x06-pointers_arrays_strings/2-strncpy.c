#include "main.h"

/**
 * *_strncpy - function that copies strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: number of characters to be copied
 *
 * Return: result
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
