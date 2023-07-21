#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function
 * @s: Operator passed as an argument
 *
 * Return: A pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int z = 0;

	while (ops[z].op != NULL && *(ops[z].op) != *s)
		z++;

	return (ops[z].f);
}
