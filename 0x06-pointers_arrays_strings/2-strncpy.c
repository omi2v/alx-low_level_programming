#include "main."
#include <string.h>
/**
 **_strncpy - main descriptioon
 *@dest: char
 *@src: srcc char
 *@n: integer
 *Return: o
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; dest[n] != '\0'; n++)
	{
		src[n] = dest[n];
	}
	src[n] = '\0';
}
