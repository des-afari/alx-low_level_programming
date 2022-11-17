#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all arguments
 * @n: first argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	
	va_list args;

	unsigned int i;
	int sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		sum += j;
	}

	va_end(args);

	return (sum);
}
