#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@ld: takes integer
*Return: value of last digit
*/
int print_last_digit(int ld)
{
	int l;
	l = l % 10;
	if (l < 0)
	{
		l = (-1 * l);
	}
_putchar(l + '0');
	return (l);
}
