#include "main.h"
/**
 * _memset - this function fills n bytes
 *
 * @s: s value of the memory area that has to get fills
 * @b: constat
 * @n: fills n bytes of memory area
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
