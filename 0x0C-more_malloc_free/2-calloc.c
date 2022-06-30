#include "main.h"
#include <stdlib.h>
/**
 *_calloc - fun for calloc
 *@nmemb: the first int
 *@size: the size
 *Return: something
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int p;
char *ar;
if (size == 0 || nmemb == 0)
return (NULL);
ar = malloc(size * nmemb);
if (ar == NULL)
return (NULL);
for (p = 0; p < (size * nmemb); p++)
ar[p] = 0;
return (ar);
}
