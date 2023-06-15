#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a d-linked list
 * @h: pointer to head of a list
 * Return: the number of elements
 */

size_t	dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
