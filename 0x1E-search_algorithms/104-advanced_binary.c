#include "search_algos.h"

/**
 * binary_recursive - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array to search in
 * @first: first index
 * @last: last index
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */

int binary_recursive(int *array, size_t first, size_t last, int value)
{
	size_t i = 0;
	size_t mid = 0;

	if (first > last)
		return (-1);

	printf("Searching in array: ");
	for (i = first; i < last; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	mid = (first + last) / 2;
	if (array[mid] == value && (mid == first || array[mid - 1] != value))
		return (mid);
	if (array[mid] < value)
		return (binary_recursive(array, mid + 1, last, value));
	return (binary_recursive(array, first, mid, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
}
