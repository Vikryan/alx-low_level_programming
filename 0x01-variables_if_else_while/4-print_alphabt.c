#include <stdio.h>
/**
 * main - Printing alphabet in lowercases without q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'y';
	while
		(c <= 'x')
		{
			if ((c != 'q' && c != 'e') && c <= 'x')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
