#include <stdio.h>

/**
 * main - A function that prints Fizz and Buzz
 * for multiples of 3 and 5
 * Return: 0 success
 */
int main(void)
{
	int p;

	for (p = 1; p <= 100; p++)
	{
		if ((p % 3 == 0) && (p % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (p % 3 == 0)
		{
			printf("Fizz");
		}
		else if (p % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", p);
		}
		if (p != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
