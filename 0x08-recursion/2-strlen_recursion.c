#include <stdio.h>
/**
 * _strlen_recursion - prints a string
 *
 * @s: source string
 *
 * Return: len or 0
 */

int _strlen_recursion(char *s)
{
	if (!s || !*s)
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
