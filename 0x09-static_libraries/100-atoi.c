#include "main.h"
/**
 * _atoi - converts a string into an int
 * @s: string to use.
 * Return: int
 */
int _atoi(char *s)
{
	int sign = 1, t = 0;
	unsigned int res = 0;

	while (!(s[t] <= '9' && s[t] >= '0') && s[t] != '\0')
	{
		if (s[t] == '-')
			sign *= -1;
		t++;
	}
	while (s[t] <= '9' && (s[t] >= '0' && s[t] != '\0'))
	{
		res = (res * 10) + (s[t] - '0');
		t++;
	}
	res *= sign;
	return (res);
}
