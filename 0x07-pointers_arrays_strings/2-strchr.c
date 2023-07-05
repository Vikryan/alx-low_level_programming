#include <stdio.h>
#include "main.h"

/**
 * *_strchr - the entry point
 * @s: an input
 * @c: an input
 * Return: 0 on success
 */
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
			return (s + t);
	}
	return (NULL);
}
