#include "main.h"

/**
 * _strspn - Obtains the length of a substring's prefix
 * @s: The string being searched
 * @accept: The prefix being measured
 *
 * Return: the number of  bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
