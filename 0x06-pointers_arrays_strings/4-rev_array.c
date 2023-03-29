#include "main.h"

/**
 * reverse_array - function that reverses an array
 * @a: input array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int tmp;

	for (i = 0; i < j; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
		j--;
	}
}
