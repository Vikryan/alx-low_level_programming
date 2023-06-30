#include "main.h"

/**
 * puts2 - printing the characters of a string
 * @str: the reference to the string
 * Return: 0 (success)
 */
void puts2(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
		m++;
	}
	_putchar('\n');
}
