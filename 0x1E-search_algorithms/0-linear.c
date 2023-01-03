#include "search_algos.h"
#include "stddef.h"
/**
 * linear_search - function that used to liner
 * @array: the array
 * @size: the size
 * @value: the the value
 * Return: something
 */
int linear_search(int *array, size_t size, int value)
{
int found = 0;
int i;
for (i = 0; i < size; i++)
{
if (array[i] == value)
return (value);
found = 1;
}
if (array == NULL)
{
return (-1);
}
}
