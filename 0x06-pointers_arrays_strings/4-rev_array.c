#include "main.h"

/**
 * reverse_array - Function that reverses
 * the content of an array of integers
 * @a: an array
 * @n: the number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int p;
	int z;

	for (p = 0; p < n--; p++)
	{
		z = a[p];
		a[p] = a[n];
		a[n] = z;
	}
}
