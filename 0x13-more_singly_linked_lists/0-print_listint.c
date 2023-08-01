#include "lists.h"

/**
 * print_listint - A function printing the elements of a linked list
 * @h: the linked list to print
 *
 * Return: the nmumber of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
