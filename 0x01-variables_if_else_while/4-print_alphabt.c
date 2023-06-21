#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Printing lowercase alphabets without q and e
 *
 * Return: Always 0
 */
int main(void)
{
	int z;

	for (z = 97, z < 123; z++;)
	{
		if (z != 101 && z != 113)
		{
			putchar(z);
		}
	}
	putchar('\n');
	return (0);
}
