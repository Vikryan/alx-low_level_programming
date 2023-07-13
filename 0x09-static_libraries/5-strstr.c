#include "main.h"
/**
 * _strstr - Code entry
 * @haystack: an input
 * @needle: an input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *y = haystack;
		char *z = needle;

		while (*y == *z && *z != '\0')
		{
			y++;
			z++;
		}

		if (*z == '\0')
		return (haystack);
	}

	return (0);
}
