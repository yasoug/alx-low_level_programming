#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a node at a given position
 * @head: the linked list
 * @idx: the index of the list where the new node should be added
 * @n: int to insert in the new node
 * Return: the address of the new node, NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode;
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (i < idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == idx - 1)
	{
		newnode->next = tmp->next;
		tmp->next = newnode;
		return (newnode);
	}
	return (NULL);
}
