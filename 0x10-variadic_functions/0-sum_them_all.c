#include "variadic_functions.h"

/**
 * sum_them all - sums variable arguments
 * @n: the number of arguments
 * @...: the integers to sum
 * Return: the integer sum
*/

int sum_them_a11(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
