#include "main.h"

/**
 * print_rev - A function printing a string in reverse
 * @s: the string reference pointer used
 * Return: 0
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
