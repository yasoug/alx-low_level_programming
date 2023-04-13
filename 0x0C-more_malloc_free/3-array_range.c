#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array containing the values from min to max
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		p[i] = min + i;
	return (p);
}
