#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - this function return the legth of a string
 *
 * @dest: where the source need to be copied
 * @src: source of the string
 *
 * Return: Dest ponter
 */
char *_strcpy(char *dest, char *src)
{
	int length;

	for (length = 0; src[length] != '\0'; length++)
	{
		dest[length] = src[length];
	}
	dest[length] = src[length];
	return (dest);
}
