#include "main.h"
/**
 * flip_bits - flip function
 * @n: the int value
 * @m: the ma value
 * Return: something
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int xor = n ^ m;
int c = 0;
if (!n || !m)
	return (0);
while (xor)
{
if (xor & 1)
c++;
xor = xor >> 1;
}
return (c);
}
