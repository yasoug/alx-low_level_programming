#include "lists.h"

/**
 * add_node_end - function that adds a node at the end of a list
 * @head: head of the linked list
 * @str: string to add in a new node
 * Return: the address of the new element, NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *tmp = *head;
	int i = 0;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	while (str[i])
		i++;
	ptr->str = strdup(str);
	ptr->len = i;
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
