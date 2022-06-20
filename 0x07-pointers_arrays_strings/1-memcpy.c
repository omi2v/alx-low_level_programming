#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: where to copy the memory
 * @n: number of byte
 * @src: the memory area to copy from
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *csrc = (char *)src;
char *cdest = (char *)dest;
	unsigned int i = 0;
for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
