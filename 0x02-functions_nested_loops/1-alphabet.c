#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	print_alphabet();

	return (0);
}


void print_alphabet(void)
{
	for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		printf("%c", alphabet);
	}
}
