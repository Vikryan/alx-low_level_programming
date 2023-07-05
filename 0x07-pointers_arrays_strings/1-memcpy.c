#include "main.h"

/**
 *  *_memcpy - A function that copies memory area
 *  @n: the copies of function
 *  @src: memory area bytes
 *  @dest: the memory area
 *  Return: a pointer to memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
