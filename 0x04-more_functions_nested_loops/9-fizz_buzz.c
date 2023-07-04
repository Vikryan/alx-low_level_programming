#include "main.h"
#include <stdio.h>

/**
 * main - A function printing numbers from 1 t 100
 * but prints Fizz and Buzz for multipls of 3 and 5
 * Return: 0 (success)
 */
int main(void)
{
	int k;
	char x[] = "Fizz";
	char p[] = "Buzz";
	char xp[] = "FizzBuzz";

	for (k = 1; 1 <= 100; k++)
	{
		if (k == 100)
			printf("%s", p);
		else if ((k % 3 == 0) && (k % 5 == 0))
			printf("%s", xp);
		else if (k % 3 == 0)
			printf("%s", x);
		else if (k % 5 == 0)
			printf("%s", p);
		else
			printf("%d", k);
	}
	printf("\n");
}
