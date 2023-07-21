#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing upcodes
 * @argc: arguments
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, t;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (t = 0; t < bytes; t++)
	{
		if (t == bytes - 1)
		{
			printf("%02hhx\n", arr[t]);
			break;
		}
		printf("%02hhx ", arr[t]);
	}
	return (0);
}
