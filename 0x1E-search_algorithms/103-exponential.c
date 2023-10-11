#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array to search in
 * @first: first index
 * @last: last index
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */

int _binary_search(int *array, int value, size_t first, size_t last)
{
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

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	if (bound > size - 1)
		bound = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n",
		(bound + 1) / 2, bound);
	return (_binary_search(array, value, (bound + 1) / 2, bound));
}
