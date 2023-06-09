#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 when success, 1 if the program does not receive 2 arguments
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
