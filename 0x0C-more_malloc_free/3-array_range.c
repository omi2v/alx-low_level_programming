#include "main.h"
#include <stdlib.h>
/**
 * array_range - array fun
 * @min: the first min
 * @max: the second maxxxxxx
 * Return: something
 */
int *array_range(int min, int max)
{
int p;
int q = 0;
int *ar;
if (min > max)
return (NULL);
ar = malloc(sizeof(int) * (max - min + 1));
if (ar == NULL)
return (NULL);
for (p = min; p <= max; p++)
{
ar[q] = p;
q++;
}
return (ar);
}

