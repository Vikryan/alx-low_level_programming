#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - A function that finds string length
 * @str: string length
 *
 * Return: String length
 */
unsigned int _strlen(char *str)
{
	unsigned int p;

	for (p = 0; str[p]; p++)
		;
	return (p);
}

/**
 * add_node_end - A function that adds a node at the end
 * @head: double pointer
 * @str: The string to add
 *
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
