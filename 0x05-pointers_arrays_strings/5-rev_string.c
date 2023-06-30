#include "main.h"

/**
 * rev_string - A function printing in reverse
 * @s: It points to the string
 * Return: 0 on success
 */
void rev_string(char *s)
{
	int length, t, half;
	char temp;

	for
		(length = 0;
		s[length] != '\0';
		length++);

	t = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - t - 1];
		s[length - t - 1] = s[t];
		s[t] = temp;
		t++;
	}
}
