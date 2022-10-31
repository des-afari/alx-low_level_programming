#include "main.h"
/**
 * _strchr - locate a character in a string
 *
 * @s: string value
 *
 * @c: character
 *
 * Return:pointer to char*
 */

char *_strchr(char *s, char c)
{

	do		{

		if (*s == c)
			{
			break;
			}
		}	while (*s++);

return (s);
}
