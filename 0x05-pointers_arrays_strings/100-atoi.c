#include "main.h"

/**
 * _atoi - A function that converts a string into an integer
 * @p: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *p)
{
	int k, l, m, len, g, digit;

	k = 0;
	l = 0;
	m = 0;
	len = 0;
	g = 0;
	digit = 0;

	while (p[len] != '\0')
		len++;

	while (k < len && g == 0)
	{
		if (p[k] == '-')
			++l;

		if (p[k] >= '0' && p[k] <= '9')
		{
			digit = p[k] - '0';
			if (l % 2)
				digit = -digit;
			m = m * 10 + digit;
			g = 1;
			if (p[k + 1] < '0' || p[k + 1] > '9')
				break;
			g = 0;
		}
		k++;
	}

	if (g == 0)
		return (0);

	return (m);
}
