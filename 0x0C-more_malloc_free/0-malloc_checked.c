#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - program allocating memory using mallov
 * @t: the nnumber of bytes allocated
 *
 * Return: pointer to memory allocated
 */
void *malloc_checked(unsigned int t)
{
	void *ptr;

	ptr = malloc(t);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
