#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - printing array elem
 * @array: array
 * @size: number of elem
 * @action: pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int t;

	if (array == NULL || action == NULL)
		return;

	for (t = 0; t < size; t++)
	{
		action(array[t]);
	}
}
