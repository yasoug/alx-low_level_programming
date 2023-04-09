#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @s: input string
 * Return: 1 if the entire string is a number, 0 otherwise
 */

int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - program that adds positive numbers
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 when success, 1 if one of the number contains symbols
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (_isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
