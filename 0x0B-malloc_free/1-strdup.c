#include "main.h"
#include <stdlib.h>
/**
 *_strdup - function t use malloc
 *@str: the character
 *Return: something
 */
char *_strdup(char *str)
{
unsigned int i = 0;
unsigned int j = 0;
if (str == NULL)
return (NULL);
char *s;
while (str[i])
i++;
s = malloc(sizeof(char) * (i + 1));
if (ar == NULL)
return (NULL);
while (str[j])
{
ar[j] = str[j];
j++;
}
ar[j + 1] = 0;
return (ar);
}

