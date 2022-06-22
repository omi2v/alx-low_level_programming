#include "main.h"
/**
 *factorial - factorial function
 *@n: the integer value
 *Return: return 0 or 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
