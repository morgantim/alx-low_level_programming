#include "main.h"
/**
 * binary_to_uint - this function converts a binary to uint
 * @b: binary number
 * Return: uint converted
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int convertedNum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		convertedNum = convertedNum << 1;

		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			convertedNum = convertedNum | 1;
	}
	return (convertedNum);
}
