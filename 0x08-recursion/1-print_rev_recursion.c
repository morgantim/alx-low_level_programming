#include <stdio.h>
/**
 * _print_rev_recursion - prints a string
 *
 * @s: source string
 */

void _print_rev_recursion(char *s)
{
	if (!s || !*s)
	{
		return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);
}
