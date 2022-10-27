#include "main.h"
/**
 * get_bit - this function returns a bit of at a given index
 * @index: index
 * @n: number given
 * Return: bit of given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 32)
		return (-1);

	bit = n >> index;

	return (bit & 1);
}
