#include "main.h"
/**
*_abs - prints absolute value of a number
*@a: takes integer
*Return: value of last digit
*/
int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}

