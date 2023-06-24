#include "main.h"

/**
 * _islower - A function that checks for lowercase characters
 * @c: The character being checked
 *
 * Return: 0 for anything else and 1 for lowercase character
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
