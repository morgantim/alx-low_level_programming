#include "main.h"
/**
 * _strchr - this function locates a character
 *
 * @s: string
 * @c: charachter to find
 *
 * Return: dest
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return ((char *)s);
		}
	} while (*s++);
	return (0);
}
