#include "main.h"

/**
 * _strdup - function that copies a string to a newly allocated space
 * @str: the string to duplicate
 * Return: pointer to duplicated string, NULL if it fails
 */

char *_strdup(char *str)
{
	int i = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++;
	copy = malloc(i * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
