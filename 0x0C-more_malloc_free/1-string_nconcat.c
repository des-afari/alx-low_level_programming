#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string
 *
 * @s2: string
 *
 * @n: int
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *value;

	value = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 2));

	if (value == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	else if (s2 == NULL)
		s2 == "";

	if (n >= strlen(s2))
	{
		strcat(s1, s2);
		return (s1);
	}

	strncat(s1, s2, n);
	return (s1);
}
