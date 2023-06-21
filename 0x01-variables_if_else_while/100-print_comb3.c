#include <stdio.h>
/**
 * main - Printing different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int k, l;

	for (k = 38; k <= 65; k++)
	{
		for (l = 39; l <= 66; l++)
		{
			if (k > l)
			{
				putchar(k);
				putchar(l);
				if (k != 65 || l != 66)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
