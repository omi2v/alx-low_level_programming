#include "main.h"
/**
 * print_diagsums - to print something
 * @a: integer value
 * @size: the szeof the thin g
 * Return: no
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int j = size - 1;
int sum1 = 0;
int sum2 = 0;
while (i <= (size * size))
{
sum1 = sum1 + a[i];
i = i + size + 1;
}
while (j < (size * size - 1))
{
sum2 += a[j];
j = j + size - 1;
}
_putchar("%d, %d\n", sum1, sum2);
}

