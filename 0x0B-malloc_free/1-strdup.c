#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly space in memory
 *
 * @str: string
 *
 * Return: char
 */

char *_strdup(char *str)
{
	char *x;
	char n = 'a';
	int i;
	int l;

	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; n; l++)
	{
		n = str[l];
	}

	x = malloc(sizeof(char) * l);

	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		x[i] = str[i];
	}
	return (x);
}
