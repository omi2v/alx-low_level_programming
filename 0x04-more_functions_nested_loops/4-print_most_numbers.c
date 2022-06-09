#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: Always 0
 */

void print_numbers(void)
{
int p;
for (p = '0'; p <= '9'; p++)
{
if ((p == '2') || (p == '4'))
{
continue;
}
_putchar(p);
}
_putchar('\n');
return (0);
}

