#include "search_algos.h"
/**
 * binary_search - a function to search binary
 * @array: the array to be searched
 * @size: the size
 * @value: the value
 * Return: something
 */
int binary_search(int *array, size_t size, int value)
{
size_t r = size - 1, l = 0, m;
if (array == NULL)
return (-1);
while (l < r)
{
m = (l + r) / 2;
if (value == array[m])
return (m);
else if (value < array[m])
r = m - l;
}
return (-1);
}
