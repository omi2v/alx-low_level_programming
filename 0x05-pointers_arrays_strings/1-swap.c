#include "main.h"
/**
 * swap_int - description for swap
 * @a: the first integer
 * @b: the second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;
		temp = *a;
	*a = *b;
	*b = temp;
}

