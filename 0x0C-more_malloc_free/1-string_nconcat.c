#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - A function concatenates two strings
 * @s1: append to string
 * @s2: concatenates from
 * @n: the number of byte
 *
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int p = 0, t = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (p < len1)
	{
		s[p] = s1[p];
		p++;
	}

	while (n < len2 && p < (len1 + n))
		s[p++] = s2[t++];

	while (n >= len2 && p < (len1 + len2))
		s[p++] = s2[t++];

	s[p] = '\0';

	return (s);
}
