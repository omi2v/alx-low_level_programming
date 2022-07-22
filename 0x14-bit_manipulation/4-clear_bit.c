#include "main.h"
/**
 * clear_bit - clear function
 * @n: from integer
 * @index: from index
 * Return: something
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m = 1;
unsigned int b = sizeof(n) * 8 - 1;
if (index > b)
	return (-1);
*n = *n & ~(m << index);
return (1);
}
