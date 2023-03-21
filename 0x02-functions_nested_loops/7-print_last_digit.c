#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @i: input integer
 * Return: the last digit
 */

int	print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
		j = j * -1;
	_putchar('0' + j);
	return (j);
	_putchar('\n');
}
