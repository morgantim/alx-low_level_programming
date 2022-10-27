#include "main.h"
/**
 * clear_bit - this function sets the value of a bit at index
 * @index: index
 * @n: number given
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	long int bit;

	if (index > 32)
		return (-1);

	bit = 1 << index;
	*n = *n & ~bit;

	return (1);
}
