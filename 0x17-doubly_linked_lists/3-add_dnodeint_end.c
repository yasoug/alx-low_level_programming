#include "lists.h"

/**
 * add_dnodeint_end - function that adds node to the end of d-linked list
 * @head: pointer to head of list
 * @n: data
 * Return: the address of new element, or Null if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tail;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	tail = *head;
	while (tail->next)
		tail = tail->next;
	new_node->next = NULL;
	new_node->prev = tail;
	tail->next = new_node;

	return (new_node);
}
