#include "main.h"

#include <stdlib.h>
/**
 * str_concat - this function concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *x;
	char n = 'a';
	int i;
	int j;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*calculate first string length*/
	for (len1 = 0; n; len1++)
	{
		n = s1[len1];
	}
	/*calculate second string length*/
	n = 'a';
	for (len2 = 0; n; len2++)
	{
		n = s2[len2];
	}

	x = malloc((sizeof(char) * len1 - 1) + (sizeof(char) * len2));

	if (x == NULL)
		return (NULL);
	for (i = 0; i + 1 < len1; i++)
	{
		x[i] = s1[i];
	}
	for (j = 0; i < (len1 + len2); i++)
	{
		x[i] = s2[j];
		j++;
	}
	return (x);
}
