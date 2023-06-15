#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a d-linked list
 * @head: pointer to head of doubly linked list
 * @index: index of the node to return
 * Return: pointer to the node, or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);

	return (NULL);
}
