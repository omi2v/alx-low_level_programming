#include <stdlib.h>
#include "main.h"
/**
 * _strpbrk - searching string
 * @s: string
 * @accept: the byte too search
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
