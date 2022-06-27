#include "main.h"
/**
 *create_array - function
 *@size: the integer size
 *@c: the charachter
 *Return: NULL or a pointer
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
	return (NULL);
i = 0;
while (i < size)
{
	str[i] = c;
i++;
}
return (str);
}
