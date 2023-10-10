#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = size - 1;
	size_t i = 0;
	size_t mid = 0;

	if (!array)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (first + last) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return (-1);
}
