#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns sum
 * @a: first number
 * @b: second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference
 * @a: first number
 * @b: second number
 *
 * Return: ..
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product
 * @a: first number
 * @b: second number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of numbers
 * @a: first number
 * @b: second number
 *
 * Return: The quotient of numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of numbers
 * @a: first number
 * @b: second number
 *
 * Return: Remainder of division of two numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
