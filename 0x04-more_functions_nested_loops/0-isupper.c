#include "main.h"

/**
 * _isupper - checking for uppercase characters
 * @c: The character to check
 * Return: 0 for anything else and 1 for uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
