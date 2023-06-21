#include <stdio.h>
/**
 * main - Printing alphabet in lowercases without q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char p;

	p = 'a';
	while
		(p <= 'z')
		{
			if ((p != 'q' && p != 'e') && p <= 'z')
				putchar(p);
			p++;
		}
	putchar('\n');
	return (0);
}
