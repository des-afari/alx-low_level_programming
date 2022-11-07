#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *final;

	int i, j, k, l;

	if (s1 == NULL)
		i = 0;

	if (s2 == NULL)
		k = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		j = i;
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
		l = k;
	}

	final = malloc(sizeof(char) + l + j + 1);

	if (final == NULL)
	{
		return (NULL);
	}

	strcat(s1, s2);

	return (s1);
}

