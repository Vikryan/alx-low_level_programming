#include <stdio.h>
/**
 * main - Printing all numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char y;

	int k;

	y = 'a';
	k = 0;
	while
		(k < 10)
		{
			putchar(k + '0');
			k++;
		}
	while
		(y <= 'f')
		{
			putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}
