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
size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
