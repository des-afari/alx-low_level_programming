#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string
 * @n: int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (seperator == NULL)
		return (NULL);

	unsigned int i;

	va_list args;

	va_start(args, n);

	int x;

	for (i = 0; i < n; i++)
	{
		x = va_args(args, int);

		printf("%d%s", x, separator);
	}

	printf("\n");
}
