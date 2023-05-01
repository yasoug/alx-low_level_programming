#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node of a linked list
 * @head: the linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *tmp2;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == index - 1)
	{
		tmp2 = tmp->next;
		tmp->next = tmp2->next;
		free(tmp2);
		return (1);
	}
	return (-1);
}
