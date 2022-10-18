#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: Prints out all lower case alphabets
 *
 * Return: Always 0 (Success)
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
