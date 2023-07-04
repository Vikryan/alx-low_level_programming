#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line
 * @x: the number of times the character is printed
 */
void print_diagonal(int x)
{
	if (x <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int o, p;

		for (o = 0; o < x; o++)
		{
			for (p = 0; p < x; p++)
			{
				if (p == o)
					_putchar('\\');
				else if (p < o)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
