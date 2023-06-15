#include "lists.h"

/**
 * insert_node - function that inserts node at given index
 * @tmp: ptr to nth position node in a d-linked list
 * @n: data
 * Return: the address of the inserted node
 */

dlistint_t *insert_node(dlistint_t *tmp, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	new_node->next = tmp;
	new_node->prev = tmp->prev;
	tmp->prev->next = new_node;
	tmp->prev = new_node;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - function that inserts a node at a given position
 * @h: pointer to head of doubly linked list
 * @idx: the index of the list where the new node should be added
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;

	if (!idx)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);

	tmp = *h;
	while (idx && tmp->next)
	{
		idx--;
		tmp = tmp->next;
	}
	if (idx == 0)
		return (insert_node(tmp, n));
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
