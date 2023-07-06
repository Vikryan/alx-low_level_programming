#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - A function returning the natural sq root
 * @n: the number to calculate the natural square root
 *
 * Return: the natural sq root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)

	return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - computes the natural square root
 * @n: the number to compyte the square root
 * @i: iterate number
 *
 * Return: natural square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}
