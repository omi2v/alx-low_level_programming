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
	char *ar
	if (nmemb == 0 || size == 0)
		return (NULL);
			if (ar == NULL)
				return (NULL);
	ar = malloc(nmemb * size);
	for (p = 0; p < (size * nmemb); p++)
		ar[p] = 0;
	return (ar);
}
