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
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i=0; s1[i] != '\0'; i++)
		;
	
	for (j=0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;

	value = malloc(sizeof(char) * (i + n + 1));

	if (value == NULL)
		return (NULL);

	for (k=0; s1[k] != '\0'; k++)
		value[k] = s1[k];

	for (l=0; s2[l] != '\0'; l++)
		value[k+l] = s2[l];

	value[k+l+1] = '\0';

	return (value);
}
