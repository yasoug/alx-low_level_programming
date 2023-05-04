#include "main.h"

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: pointer to the string of 0 and 1 chars
 * Return: the converted number, or 0 if b (is not 0 or 1) or (is NULL)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);

		decimal = decimal * 2 + *b - '0';
		b++;
	}
	return (decimal);
}
