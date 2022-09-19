#include "main.h"
/**
 * puts_half - this function return the legth of a string
 *
 * @str: value
 *
 */
void puts_half(char *str)
{
	int arrayLength = 0;
	int i = 0;
	int half = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	arrayLength = i + 1;
	if (arrayLength % 2 == 0)
	{
		half = arrayLength / 2;
	}
	else
	{
		half = (arrayLength - 1) / 2;
	}
	while (half <= arrayLength)
	{
		if (str[half] != '\0')
		{
			_putchar(str[half]);
		}
		half++;
	}
	_putchar('\n');
}
