#include <stdio.h>
#include <math.h>
/**
 * main - A function finding and printing the largets prime factor
 * Return: 0
 */
int main(void)
{
	long int x;
	long int max;
	long int t;

	x = 612852475143;
	max = -1;

	while (x % 2 == 0)
	{
		max = 2;
		x /= 2;
	}
	for (t = 3; t <= sqrt(x); t = t + 2)
	{
		while (x % t == 0)
		{
			max = t;
			x = x / t;
		}
	}
	if (x > 2)
		max = x;

	printf("%ld\n", max);

	return (0);
}
