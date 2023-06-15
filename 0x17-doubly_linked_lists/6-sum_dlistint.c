#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a d-linked list
 * @head: pointer to head of doubly linked list
 * Return: sum of all data, or 0 if list empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
