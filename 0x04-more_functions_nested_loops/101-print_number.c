#include "main.h"
/**
 * print_number - A function that prints an integer
 * @d: The integer to be printed
 */
void print_number(int d)
{
	unsigned int d1;

	if (d < 0)
	{
		d1 = -d;
		_putchar('-');
	}
	else
	{
		d1 = d;
	}
	if (d1 / 10)
	{
		print_number(d1 / 10);
	}
	_putchar((d1 % 10) + '0');
}
