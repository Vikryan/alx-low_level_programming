#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Printing combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int e, f;

	for (e = '0'; e < '9'; e++)
	{
		for (f = f + 1; f <= '9'; f++)
		{
		if (e != f)
		{
		putchar(e);
		putchar(f);
		if (e == '8' && f == '9')
		continue;
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
