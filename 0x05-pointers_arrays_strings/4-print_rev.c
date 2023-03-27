#include "main.h"

/**
 * print_rev - prints a string in reverse followed by new line
 * @s: input string, to print in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
