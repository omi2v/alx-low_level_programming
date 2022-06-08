#include "main.h"
/**
*print_sign - returns 1 if lowercase alphabet and 0 otherwise
*@c: takes in a character
*Return: 0 for uppercase, 1 for lowercase
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
