#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that prints the number of args
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
