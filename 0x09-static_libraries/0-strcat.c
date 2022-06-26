#include "main.h"
/**
 * *_strcat - description of the main function
 * @dest: the first string
 * @src: the second string
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
char *temp = dest;
while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = '\0';
return (temp);
}
