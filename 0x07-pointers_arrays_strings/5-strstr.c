#include "main.h"
#include <stdio.h>

/**
 * *_strstr - the code entry point
 * @haystack: an input
 * @needle: an input
 * Return: 0 on success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
