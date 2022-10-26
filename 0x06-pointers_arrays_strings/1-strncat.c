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
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = malloc(strlen(dest) + strlen(src) + 2);

	strcpy(result, dest);
	strcat(result, " ");
	strncat(result, src, n);

	return (result);
}
