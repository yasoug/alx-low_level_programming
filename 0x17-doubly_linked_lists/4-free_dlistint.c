#include "lists.h"

/**
 * free_dlistint - function that frees a d-linked list
 * @head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
