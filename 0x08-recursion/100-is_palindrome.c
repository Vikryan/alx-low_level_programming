#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function that returns 1 for palindrom string
 * @s: the string
 * Return: 1 for palindrome string or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks each character of a string
 * @s: the string
 * @p1: small iterator
 * @len: big iterator
 * Return: 1 for string palindrom or 0
 */
int check_pal(char *s, int p1, int len)
{
	if (*(s + p1) != *(s + len - 1))
		return (0);
	if (p1 >= len)
		return (1);
	return (check_pal(s, p1 + 1, len - 1));
}
