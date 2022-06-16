#include "main."
#include <string.h>
/**
 *_strncpy - main descriptioon
 *@dest: char
 *@src: srcc char
 *@n: integer
 *Return: o
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	for (; i < n; i++)
	{
	dest[i] != '\0';
	}
	return (dest);
}
