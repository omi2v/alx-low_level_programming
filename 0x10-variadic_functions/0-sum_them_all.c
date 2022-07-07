#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - functioon to sum all
 * @n: the n times integer
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int x, sum = 0;
	if (n == 0)
		return (0);
	va_start(valist, n);
	for (x = 0; x < n; x++)
		sum += va_arg(valist, int);
	va_end(valist);
		return (sum);
}

