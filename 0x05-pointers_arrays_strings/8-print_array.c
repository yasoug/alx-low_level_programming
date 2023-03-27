#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integers
 * @a: input array
 * @n: input, the number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
