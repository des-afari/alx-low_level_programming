#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints out all lower case alphabets
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int x = 0;

	while (x < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);

		}

		_putchar('\n');
		x++;
	}

}
