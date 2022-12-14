#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: pointer
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
