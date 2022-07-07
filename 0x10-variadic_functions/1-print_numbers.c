#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function to print numbers
 * @separator: a character used to separate
 * @n: the constant integer
 * Return: something
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
va_start(list, n);
for (i = 0; i < n; i++)
{
printf("%i", va_arg(list, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
