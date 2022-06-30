#include "main.h"
#include <stdlib.h>
/**
 * _realloc - realoc function
 * @old_size: first integer
 * @new_size: second function
 * Return: somethimg
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ar;
char *older = ptr;
unsigned int i;
if (old_size == new_size)
return (ptr);
if (ptr == NULL)
{
ar = malloc(new_size)
return (ar);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
ar = malloc(new_size);
if (ar == NULL)
return (NULL);
for (i = 0; i < old_size; i++)
ar[i] = older[i];
free(older);
return (ar);
}
