#include "main.h"

/**
 * _strncat - A function concatenating two strings
 * @src: input
 * @dest: input
 * @n: number of strings
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int x;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[p] = src[x];
		p++;
		x++;
	}
	dest[p] = '\0';
	return (dest);
}
