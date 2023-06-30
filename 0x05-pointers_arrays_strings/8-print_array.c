#include <stdio.h>
/**
 * print_array - A function printing n elements
 * @k: The input array
 * @n: The integer of the array
 */
void print_array(int *k, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
		printf("%d", k[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(" , ");
		}
	}
	putchar('\n');
}
