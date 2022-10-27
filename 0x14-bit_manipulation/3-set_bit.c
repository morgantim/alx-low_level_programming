#include "main.h"
/**
 * set_bit - this function sets the value of a bit to 1 at a given index
 * @index: index
 * @n: number given
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 32)
		return (-1);

	bit = 1 << index;
	*n = *n | bit;

	return (1);
}
