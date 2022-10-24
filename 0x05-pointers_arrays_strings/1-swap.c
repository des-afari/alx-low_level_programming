#include "main.h"

/**
 * swap_int - swaps values for two variables
 *
 * @a: first variable
 *
 * @b: second variable
 *
 * Return: null
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

