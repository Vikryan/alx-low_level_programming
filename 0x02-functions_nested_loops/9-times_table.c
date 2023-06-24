#include "main.h"

/**
 * times_table - Print the 9 times table starting with 0
 * Return: output empty
 */
void times_table(void)
{
	int e, f, g, h, i;

	for (e = 0; e <= 9; e++)
	{
		for (f = 0; f <= 9; f++)
		{
			g = e * f;
			if (g > 9)
			{
				h = g % 10;
				i = (g - h) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(i + '0');
				_putchar(h + '0');
			}
			else
			{
				if (f != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(g + '0');
			}
		}
		_putchar('\n');
	}
}


