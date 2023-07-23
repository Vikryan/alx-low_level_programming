#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s\n", argv[t]);
	}
	return (0);
}
