#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all arguments
 * @n: first argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j, sum = 0;

	if (n == 0)
		return (0);

	else if (n == NULL)
		return (NULL);

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		sum += j;
	}

	va_end(args);

	return (sum);
}
