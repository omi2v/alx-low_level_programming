#include "main.h"
/**
 **_strncat - main descriptioon
 *@dest:  dest char
 *@src: other char
 *@n: integer declartaion
 *Return: retun something
 */
char *_strncat(char *dest, char *src, int n)
{
	n = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
