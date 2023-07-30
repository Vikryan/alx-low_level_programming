#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function printing every element of list_t lst
 * @h: the list
 *
 * Return: nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}
