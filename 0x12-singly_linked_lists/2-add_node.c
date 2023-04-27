#include "lists.h"

/**
 * add_node - function that adds new node at the beginning of a list
 * @head: head of the linked list
 * @str: string to add in a new node
 * Return: the address of the new element, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int i = 0;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	while (str[i])
		i++;
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
