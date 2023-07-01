#include <stdio.h>
/**
 * main - printing the first 50 numbers
 * Return: 0
 */
int main(void)
{
	int m = 0;
	long n = 1, o = 2;

	while (m < 50)
	{
		if (m == 0)
			printf("%ld", n);
		else if (m == 1)
		printf(", %ld", o);
		else
		{
			0 += n;
			n = o - n;
			printf(", %ld", o);
		}
		++m;
	}
	printf("\n");
	return (0);
}
