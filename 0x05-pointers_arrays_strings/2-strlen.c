#include "main.h"
/**
 * _strlen - return the length
 * @s: declare string
 * Return: the length
 */
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
	length++;
return (length);
}
