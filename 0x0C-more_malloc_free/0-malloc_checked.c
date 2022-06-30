#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - mall function
 * @b: the first integer
 * Return: return something
 */
void *malloc_checked(unsigned int b)
{
unsigned int *p;
p = malloc(b);
if (p == NULL)
exit(98); 
	return (p);
}
