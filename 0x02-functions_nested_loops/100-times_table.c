#include <stdio.h>
/**
 * main - printing the sum of all multiples of 3 and 5
 * below 1024 (excluding)
 * Return: 0 on success
 */
int main(void)
{
	int m, n = 0;

	while (m < 1024)
	{
		if ((m % 3 == 0) || (m % 5 == 0))
		{
			n += m;
		}
		m++
	}
	printf("%d\n", n);
	return (0);
}
