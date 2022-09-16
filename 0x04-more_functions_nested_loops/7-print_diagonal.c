#include "main.h"
/**
 * print_diagonal - this function multiplies two values
 *
 * @n: value
 */

void print_diagonal(int n)
{
	int spaces = 0;
	int lines = 0;

	if (n > 0)
	{
		while (lines < n)
		{
			while (spaces < lines)
			{
				_putchar(' ');
				spaces++;
			}
			_putchar('\\');
			_putchar('\n');
			spaces = 0;
			lines++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
