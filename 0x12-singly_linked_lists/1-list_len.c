#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function that returns elemts
 * in a linked list_t list
 * @h: the pointer to the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}

	return (p);
}
