#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of the string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: n bytes from s2
 * Return: pointer to a string (s1 and s2), NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	int len1;
	int len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if ((int)n > len2)
		n = len2;
	
	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < (int)n; j++)
		concat[j + i] = s2[j];

	concat[j + i] = '\0';
	return (concat);
}
