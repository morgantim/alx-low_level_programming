#include <stdio.h>
/**
 * factorial - prints a string
 *
 * @n: sourc number
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
