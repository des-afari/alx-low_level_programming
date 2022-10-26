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
	char *result = malloc(strlen(dest) + strlen(src) + 2);

	strcpy(result, dest);
	strcat(result, " ");
	strcat(result, src);

	return (result);
}


