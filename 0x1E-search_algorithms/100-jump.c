#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t jump = sqrt(size);
	size_t flag = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if ((i + jump >= size || array[i + jump] >= value) && !flag)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + jump);
			if (i + jump < size)
				size = i + jump + 1;
			jump = 1;
			i--;
			flag++;
		}
		else if (array[i] == value)
			return (i);
	}
	return (-1);
}
