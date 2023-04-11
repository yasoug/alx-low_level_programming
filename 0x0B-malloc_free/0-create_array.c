#include "main.h"

/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: the size of the array allocated
 * @c: char for initialization
 * Return: pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == 0)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
