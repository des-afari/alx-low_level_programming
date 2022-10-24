#include "main.h"

/**
 * _puts - puts string
 *
 * @str: string variable
 *
 * Return: null
 *
 */

int _puts(char *str)
{
	for (; *str != "\0"; str++)
	{
		_putchar(*str);
	}
	_putchar("\n");
}

