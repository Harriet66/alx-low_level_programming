#include "lists.h"

/**
 * add_node - function to add a node to the top of a list
 *
 * @head: a a pointer to a pointer that points to the head of the list
 * @str: string to be addd to list
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(strlen(str) + sizeof(int) + sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
		*head = new;
		return (*head);
}
