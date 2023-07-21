#include "3-calc.h"

int op_add(int x, int p);
int op_sub(int x, int p);
int op_mul(int x, int p);
int op_div(int x, int p);
int op_mod(int x, int p);

/**
 * op_add - Returns sum
 * @x: first number
 * @p: second number
 *
 * Return: The sum of x and p
 */
int op_add(int x, int p)
{
	return (x + p);
}

/**
 * op_sub - Returns the difference
 * @x: first number
 * @p: second number
 */
int op_sub(int x, int p)
{
	return (x - p);
}
/**
 * op_mul - Returns the product
 * @x: first number
 * @p: second number
 *
 * Return: The product of x and p
 */
int op_mul(int x, int p)
{
	return (x * p);
}
/**
 * op_div - Returns the division of numbers
 * @x: first number
 * @p: second number
 *
 * Return: The quotient of numbers
 */
int op_div(int x, int p)
{
	return (x / p);
}
/**
 * op_mod - Returns the remainder of the division of numbers
 * @x: first number
 * @p: second number
 *
 * Return: Remainder of division of two numbers
 */
int op_mod(int x, int p)
{
	return (x % p);
}
