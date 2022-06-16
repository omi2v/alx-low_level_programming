#include "main.h"
/**
 *_strncat - main descriptioon
 *@dest:  dest char
 *@src: other char
 *@n: integer declartaion
 *Return: retun something
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
