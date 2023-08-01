#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list
 * @head: the initial node in the listint_t list
 * @index: the index of the node returned
 *
 * Return: pointer to the nth node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *temp = head;

	while (temp && p < index)
	{
		temp = temp->next;
		p++
	}
	return (temp ? temp : NULL);
}
