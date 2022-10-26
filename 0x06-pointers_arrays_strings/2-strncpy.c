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
	char *result = malloc(strlen(dest) + strlen(src) + 1);

	strcpy(result, dest);
	strncpy(result, src, n);

	return (result);
}
