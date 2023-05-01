#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: the linked list
 * Return: the sum, 0 if list empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
