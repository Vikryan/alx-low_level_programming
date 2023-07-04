#include <stdio.h>

/**
 * main - A function prints numbers 1 to 100
 * its instead prints Fizz for multiples of three
 * and prints Buzz for multiples of five
 * Return: 0 on success
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0 && m % 5 != 0)
		{
			printf("Fizz");
		}
		else if
			(m % 5 == 0 && m % 3 != 0)
			{
				printf("Buzz");
			}
		else if
			(m % 3 == 0 && m % 5 == 0)
			{
				printf("FizzBuzz");
			}
		else if
			(m == 1)
			{
				printf("%d", m);
			}
		else
		{
			printf("%d", m);
		}
	}
	printf("\n");

	return (0);
}
