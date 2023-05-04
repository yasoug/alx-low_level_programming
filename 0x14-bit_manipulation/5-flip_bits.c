#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: number to flip
 * @m: number to flip to
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int comparison = n ^ m;

	while (comparison)
	{
		if ((comparison & 1) != 0)
			count++;
		comparison >>= 1;
	}
	return (count);
}
