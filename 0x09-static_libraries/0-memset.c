#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @t: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char t, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = t;
		n--;
	}
	return (s);
}
