#include "main.h"

/**
 * *_strncat - concatenate strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: number of characters to be appended
 *
 * Return: result
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int j = 0;

	while (dest[a])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[a] = src[j];
		a++;
		j++;
	}

	dest[a + n + 1] = '\0';

	return (dest);
}
