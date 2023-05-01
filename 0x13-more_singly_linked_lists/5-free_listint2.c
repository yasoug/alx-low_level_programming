#include "lists.h"

/**
 * free_listint2 - function that frees a list, and sets head to NULL
 * @head: linked list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
