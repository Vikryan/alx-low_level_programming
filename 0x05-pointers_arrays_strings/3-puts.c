#include "main.h"
/**
 * _puts - prints a string, then  a new line and to stdout
 * @str: the string to be printed
 * Return: A string a new line
 */
void _puts(char *str)
{
	int t = 0;

	while (str[t])
	{
		_putchar(str[t]);
		t++;
	}
		_putchar('\n');
}
