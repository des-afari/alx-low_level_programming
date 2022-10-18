#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: value
 *
 * Return: 0, 1 or -1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
		return (1);
	}
	else if (n == 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("-1\n");
		return (-1);
	}
}
