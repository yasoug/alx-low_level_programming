#include "lists.h"

/**
 * print_dlistint - function that prints all data of d-linked list
 * @h: pointer to head of a list
 * Return: the number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
