#include "main.h"

/**
 * _strdup - return  a pointer to a new string
 *
 * @str: pointer
 *
 */

char *_strdup(char *str)
{
	char *x;

	if (str == NULL)
	{
		return (NULL);
	}
	
	x = malloc(sizeof(char) * (sizeof(str) / sizeof(str[0])));

	strcpy(x, str);	

	return (x);

	free(x);
}
