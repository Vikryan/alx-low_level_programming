#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node
 * at index index of a listint_t
 * @head: the pointer tot the initial element
 * @index: the index of the node
 *
 * Return: success 1, -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		x++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
