#include "main.h"
/**
 * _memcpy - this function copies memory area
 *
 * @dest: where the src will get copied
 * @src: area to copy
 * @n: copies n bytes of memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
