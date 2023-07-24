#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocating a memory block using malloc
 * @ptr: pointer to the memory allocated previously
 * @old_size: the size of memory allocated
 * @new_size: the size of the new memory block
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);

		if (ptr1 == NULL)

			return (NULL);
		return (ptr1);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
		return (NULL);

	for (m = 0; m < old_size && m < new_size; m++)
	{
		ptr1[m] = ((char *) ptr)[m];
	}

	free(ptr);
	return (ptr1);
}
