#include "lists.h"

/**
 * pop_listint - A function that deletes
 * the head node of a listint_t linked list
 * @head: The pointer to the initial element in the listint_t
 *
 * Return: the deleted data inserted in elements, or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
