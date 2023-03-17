#include <stdio.h>

/**
 * main - entry point
 * prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
