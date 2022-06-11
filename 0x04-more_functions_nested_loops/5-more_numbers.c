#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: Always 0
 */

void more_numbers(void)
{
	int j=0;
	while(j<10)
	{
for (int i = 0; i <= 14; i++)
{
	_putchar("%i", i);
}
_putchar('\n');
j++;
}
}
