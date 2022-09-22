#include "main.h"
/**
 * reverse_array - this function concatnates two strings
 *
 * @a: array to reverse
 * @n: number of bytes
 */
void reverse_array(int *a, int n)
{
	int charAc;
	int j = 0;
	int i = n - 1;

	while (j <= i)
	{
		charAc = a[j];
		a[j] = a[i];
		a[i] = charAc;
		i--;
		j++;
	}
}
