#include "main.h"

/**
 * _abs - Computing the absolute value of an integer
 * @c: The number being computed
 * Return: Zero or absolute value of number
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
