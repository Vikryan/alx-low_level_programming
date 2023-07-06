#include "main.h"

/**
 * factorial - computing the factorial of a number
 * @t: the number used to calculate the factorial
 *
 * Return: value of integer
 */
int factorial(int t)
{
	if (t < 0)
		return (-1);
	if (t <= 1)
		return (1);
	return (t * factorial(t - 1));
}
