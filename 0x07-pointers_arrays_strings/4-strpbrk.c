#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - The code entry point
 * @s: an input
 * @accept: an input
 * Return: 0 on success
 */
char *_strpbrk(char *s, char *accept)
{
	int k, t;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (t = 0; accept[t] != '\0'; t++)
		{
			if (s[k] == accept[t])
				return (s + k);
		}
	}
	return (NULL);
}
