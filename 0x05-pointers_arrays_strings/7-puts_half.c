#include "main.h"

/**
 * puts_half - function that divides a string in two
 *
 * @str: string variable
 *
 * Return: null
 *
 */

void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int start = length / 2;
	int end = length;

	if (length % 2 != 0)
	{
		i = (length - 1) / 2;
		i += 1;
	}

	else
	{
		i = length / 2;
	}

	for (i = start; i < end; i++)
	{
		printf("%c", str[i]);

	}
	printf("\n");
}
