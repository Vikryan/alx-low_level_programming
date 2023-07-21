#ifndef CALC_H
#define CALC_H

/**
 * struct op - A struct
 * @op: Operator
 * @f: associated function
 */
typedef struct op
{
	char *op;
	int (*f)(int x, int p);
}
op_t;

int op_add(int x, int p);
int op_sub(int x, int p);
int op_mul(int x, int p);
int op_div(int x, int p);
int op_mod(int x, int p);
int (*get_op_func(char *s))(int, int);

#endif
