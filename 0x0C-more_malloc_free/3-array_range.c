#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creating an array of integers
 * @max: maximum range
 * @min: minimum range of values
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int t, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (t = 0; min <= max; t++)
		ptr[t] = min++;

	return (ptr);
}
