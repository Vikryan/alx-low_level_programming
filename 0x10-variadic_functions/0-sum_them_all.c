#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of parameters
 * @n: number of parameters
 * @...: A variable number of paramters to compute
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int t, sum = 0;

	va_start(ap, n);

	for (t = 0; t < n; t++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
