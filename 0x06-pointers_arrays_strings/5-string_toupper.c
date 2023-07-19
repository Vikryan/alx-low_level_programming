#include "main.h"

/**
 * string_toupper - A function changing all lower case
 * letters of a string to uppercase
 * @n: the pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int z;

	z = 0;
	while (n[z] != '\0')
	{
		if (n[z] >= 'a' && n[z] <= 'z')
			n[z] = n[z] - 32;
		z++;
	}
	return (n);
}
