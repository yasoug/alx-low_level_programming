#include "lists.h"

/**
 * add_nodeint - function that adds new node at the beginning of a list
 * @head: head of the linked list
 * @n: int to add in a new node
 * Return: the address of the new element, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
