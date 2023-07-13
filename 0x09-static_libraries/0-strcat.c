#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the value
 * @src: the value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int k;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[x] = src[k];
		x++;
		k++;
	}

	dest[x] = '\0';
	return (dest);
}
