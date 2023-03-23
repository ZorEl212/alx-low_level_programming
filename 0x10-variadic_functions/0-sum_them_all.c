#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of parameters passed to the function.
 * @...: the variable arguments list.
 *
 * Return: the sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, x;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	va_end(args);

	return (sum);
}
