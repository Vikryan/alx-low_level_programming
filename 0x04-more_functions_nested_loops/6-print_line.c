#include "main.h"
/**
 * print_line - A function drawing a straight line
 * @t: the number of times the character is printed
 * Return: 0
 */
void print_line(int t)
{
	int k;

	for (k = 0; k < t; k++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
