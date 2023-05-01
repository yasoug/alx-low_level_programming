#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: the linked list
 * @index: the index of the nth node
 * Return: pointer to the nth node, NULL if it failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *position = head;

	if (position == NULL)
		return (NULL);
	while (i < index && position != NULL)
	{
		position = position->next;
		i++;
	}
	if (i == index)
		return (position);
	return (NULL);
}
