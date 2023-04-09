#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 when success, 1 if the argument is not 1
 */

int main(int argc, char *argv[])
{
	int change;
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (change >= coins[i])
		{
			change -= coins[i];
			counter++;
		}
	}
	printf("%d\n", counter);
	return (0);
}
