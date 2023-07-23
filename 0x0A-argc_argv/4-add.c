#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A program that adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m;
	unsigned int n, sum = 0;
	char *t;

	if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			t = argv[m];

			for (n = 0; n < strlen(t); n++)
			{
				if (t[n] < 48 || t[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(t);
			t++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
