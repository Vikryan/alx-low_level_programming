#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: the string copied
 *
 * Return: the string copied
 */
char *_strdup(char *str)
{
	int p = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (p < i)
	{
		s[p] = str[p];
		p++;
	}
	s[p] = '\0';
	return (s);
}
