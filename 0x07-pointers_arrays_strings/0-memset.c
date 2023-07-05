#include "main.h"

/**
 * *_memset - A function filling memory with a constant byte
 * @s: the memory area to fill
 * @b: char to be copied
 * @n: the number of times to copy b
 *
 * Return: the pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
