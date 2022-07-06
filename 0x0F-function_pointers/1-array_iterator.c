#include "function_pointers.h"
/**
 * array_iterator - function that display array
 * @array: the first array
 * @size: the size of the thing
 * @action: the action to take
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
size_t i = 0;
void (*p)(int);
p = action;
if (!array || !action)
return;
for (i = 0; i < size; i++)
p(array[i]);
}
