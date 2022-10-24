#include "main.h"

/**
 * print_rev - function that reverses a string
 *
 * @s: string variable
 *
 * Return: null
 *
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
