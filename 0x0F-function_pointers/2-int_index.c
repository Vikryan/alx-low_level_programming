#include "function_pointers.h"

/**
 * int_index - returning index place
 * @array: an array
 * @cmp: pointer to func of one of the 3 in main
 * @size: size of array
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);
}
