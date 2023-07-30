#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - A function returning string length
 * @s: char
 *
 * Return: value t
 */
int _strlen(const char *s)
{
	int t = 0;

	while (s[t] != '\0')
	{
		t++;
	}
	return (t);
}

/**
 * add_node - A function adding a new node
 * at the beginning of a list
 * @head: pointer to the node
 * @str: the new string to add
 *
 * Return: the new element's address, if it fails NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
