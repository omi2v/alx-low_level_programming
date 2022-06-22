#include "main.h"
/**
 *_strlen_recursion - the function that check the length
 *@s: string
 *Return: nothing
 */
int _strlen_recursion(char *s)
{
int length = 0;
if (s[length] != '\0')
length++;
return (length);
}
