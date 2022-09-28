#include <stdio.h>
/**
 * _puts_recursion - prints a string
 *
 * @s: source string
 */

void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
