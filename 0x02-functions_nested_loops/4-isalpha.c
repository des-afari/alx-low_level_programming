#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: value
 *
 * Return: 0 or 1
 *
 */

int _isalpha(int c)
{
	int value = isalpha(c);

	if (value > 0)
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
