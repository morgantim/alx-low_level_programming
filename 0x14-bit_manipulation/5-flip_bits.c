#include "main.h"
/**
 * flip_bits - this function returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number given at first
 * @m: number to flip in
 * Return: 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numC = 0;
	unsigned long int comparator1 = 0;
	unsigned long int comparator2 = 0;

	while (!(n == 0 && m == 0))
	{
		comparator1 = n & 1;
		comparator2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comparator1 != comparator2)
			numC++;
	}
	return (numC);
}
