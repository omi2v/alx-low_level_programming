#include "main.h"
/**
 * _strchr - locate character 
 * @s: string to take
 * @c: character to check
 * Return: Null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else 
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
