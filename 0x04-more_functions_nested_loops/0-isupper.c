#include "main.h"
/**
 * _isupper - this function  identifies an uppercase letter
 *
 * @c: character value
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
