#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: the linked list
 * Return: the head node’s data (n), 0 if linked list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
