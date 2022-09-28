#include <stdio.h>
/**
 * _pow_recursion - return x raised to the power of y
 *
 * @x: number
 * @y: raised to the power of
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x * 1);
	if (x == 0 || y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
