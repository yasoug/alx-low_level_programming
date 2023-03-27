#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of the string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts_half - prints the second half of a string
 * @str: input string
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int n;
	int i;

	if (len % 2 != 0)
		n = (len + 1) / 2;
	else
		n = len / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
