#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameteron each element of an array
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
