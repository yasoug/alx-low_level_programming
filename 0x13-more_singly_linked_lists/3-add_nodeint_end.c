#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a list
 * @head: head of the linked list
 * @n: int to add in a new node
 * Return: the address of the new element, NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *tmp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = ptr;
	return (ptr);
}
