#include "main.h"

/**
 * puts2 - function that reverses a string
 *
 * @str: string variable
 *
 * Return: null
 *
 */

void puts2(char *str)
{
	int j = 0, i;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i];

	}

	_putchar('\n');
}
