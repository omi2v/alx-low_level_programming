#include "main.h"
/**
 * set_bit - set bit fun
 * @n: n value
 * @index: the integer index
 * Return: something
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m = 1;
unsigned int b = sizeof(n) * 8 - 1;
if (index > b)
return (-1);
m = m << index;
*n = *n | m;
return (1);
}
