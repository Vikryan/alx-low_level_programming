#include "main.h"
/**
 * *_strcpy - A function copying the string pointed by src
 * @dest: char type string
 * @src: char type string
 * Description: Copying the string pointed to by 'src'
 * to the buffer pointed by 'dest'
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do	{
		x++;
		dest[x] = src[x];
	}	while (src[x] != '\0');

	return (dest);
}
