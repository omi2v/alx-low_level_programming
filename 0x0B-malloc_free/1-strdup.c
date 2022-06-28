#include "main.h"
#include <stdlib.h>
/**
 *_strdup - function t use malloc
 *@str: the character
 *Return: something
 */
char *_strdup(char *str)
{
	char *s;
unsigned int i = 0;
unsigned int j = 0;
if (str == NULL)
return (NULL);
while (str[i])
i++;
s = malloc(sizeof(char) * (i + 1));
if (s == NULL)
return (NULL);
while (str[j])
{
s[j] = str[j];
j++;
}
s[j + 1] = 0;
return (s);
}

