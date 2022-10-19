#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @n: The start value
 *
 * Return: 0
 *
 */


int print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%i", n--);
		}

		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%i", n++);
		}

		printf("%d\n", n);
	}

	return (value);
}
