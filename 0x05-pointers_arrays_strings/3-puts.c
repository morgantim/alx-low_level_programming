#include "main.h"
/**
 * _puts - this function return the legth of a string
 *
 * @str: value
 *
 */
void _puts(char *str)
{
	char n;
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = str[i];
		if (n != '\0')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
