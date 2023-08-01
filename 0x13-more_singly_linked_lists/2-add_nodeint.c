#include "lists.h"

/**
 * add_nodeint - A functin that adds a new node at the start of a linked list
 * @head: The pointer to the initial node
 * @n: the data to insert in the new node
 *
 * Return: The pointer to the new node, if it fails NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
