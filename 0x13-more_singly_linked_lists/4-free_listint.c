#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
