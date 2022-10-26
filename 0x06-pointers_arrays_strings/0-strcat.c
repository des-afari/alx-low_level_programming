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
	char *combined = strcat(*dest, *src);

	return (combined);
}
