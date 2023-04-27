#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: linked list to be freed
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
