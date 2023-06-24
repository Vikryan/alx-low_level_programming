#include "main.h"

/**
 * _isalpha - A function checking for alphabetic character
 * @c: Character being checked
 * Return: 0 for anything else and 1 for alphabetic character
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
