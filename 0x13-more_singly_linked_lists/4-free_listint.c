#include "lisst.h"

/**
 * free_listint - A function that frees a linked list
 * @head: the listint_t that needs to freeing
 *
 * Return: ..
 */
void free_listnt(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
