#include "main.h"
/**
 * get_bit - bit function
 * @n: the integer
 * @index: the value of index
 * Return: something
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int m = 1;
unsigned int b = sizeof(n) * 8 - 1;
if (index > b)
	return (-1);
m = m << index;
if (n & m)
	return (1);
else
return (0);
}
