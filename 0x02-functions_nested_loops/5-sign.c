#include "main.h"

/**
 * print_sign - Function printing the sign of a number
 * @n: The number being checked
 * Return: zero for anything else, -1 for negative num, or 1 for positive num
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
