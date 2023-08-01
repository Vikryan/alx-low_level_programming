#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t
 * @head: the pointer tot the initial node
 * Return: the pointer tit the initial node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
