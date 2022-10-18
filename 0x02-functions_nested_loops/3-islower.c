#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: value
 *
 * Return: 0 or 1
 *
 */

int _islower(int c)
{
	int value = islower(c);

	if (value > 0)
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
