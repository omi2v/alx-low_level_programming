#include "main.h"
/**
 * binary_to_uint - convert binary
 * @b: the b character
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;
unsigned int n = 0;
unsigned int power = 0;
if (b = '\0')
return (0);
while (b[i + 1])
i++;
while (i >= 0)
{
if (b[i] == '0')
{
i--;
power++;
}
else if (b[i] == '1')
{
n += (1 << power);
i--;
power++;
}
else
return (0);
}
return (n);
}
