#include "main.h"
/**
*print_sign - description for _putchar something
*@c: takes in a character
*Return: 0 for 0, 1 for +, -1 for -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
