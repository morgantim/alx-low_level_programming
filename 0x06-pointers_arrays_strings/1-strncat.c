#include "main.h"
/**
 * _strncat - this function concatnates two strings
 *
 * @dest: dest string
 * @src: src string
 * @n: bytes to concatenate
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int length2 = 0;
	int i;

	while (dest[length] != '\0')
	{
		length++;
		if (dest[length] == '\0')
		{
			for (i = 0; src[length2] != '\0' && i < n; i++)
			{
				dest[length] = src[length2];
				length++;
				length2++;
			}
			dest[length] = '\0';
		}
	}
	return (dest);
}
