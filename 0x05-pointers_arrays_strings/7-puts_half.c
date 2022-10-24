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

	for (i = start; i < end; i ++)
	{
		printf("%c", str[i]);

	}
	printf("\n");
}
