#include <stdlib.h>
#include "main.h"

/**
 * *_memset - its fills the membory with constant byte
 * @s: memory area
 * @b: char
 * @n: number of times
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}
	return (s);
}

/**
 * *_calloc - allocating memory for an array
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

