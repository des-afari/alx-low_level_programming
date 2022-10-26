#include "main.h"

/**
 * leet - Encodes a stringinto 1337
 *
 * @s: string
 *
 * Return: s
 *
 */

char *leet(char *s)
{
	int a = 0;
	int b = 0;
	int l = 5;

	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < l)
		{
			if (s[a] == r[b] || s[a] - 32 == r[b])
			{
				s[a] = n[b];
			}

			b++;
		}
		
		a++;
	}

	return (s);
}
