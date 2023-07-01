#include <stdio.h>
/**
 * main - program that finds and prints the sum of even valued terms
 *
 * Return: 0
 */
int main(void)
{
	int e = 0;
	long f = 1, g = 2, sum = g;

	while (g + f < 4000000)
	{
		g += f;
		if (g % 2 == 0)
		sum += g;
		f = g - f;
		++e;
	}
	printf("%ld\n", sum);
	return (0);
}
