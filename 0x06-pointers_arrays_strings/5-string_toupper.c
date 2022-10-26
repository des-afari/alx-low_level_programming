#include "main.h"

/**
 * *string_toupper - converts elements to upper
 *
 * @str: string
 *
 * Return: result
 *
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}

		i++;
	}

	return (str);
}
