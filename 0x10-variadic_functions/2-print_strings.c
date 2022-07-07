#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function to print string
 * @separator: the character
 * @n: the string to print n time
 * Return: something
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *u;
va_start(list, n);
for (i = 0; i < n; i++)
{
u = (va_arg(list, char*));
if (list != NULL)
printf("%s", u);
else
printf("(nil)");
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
