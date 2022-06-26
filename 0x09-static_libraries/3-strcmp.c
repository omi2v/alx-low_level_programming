#include "main.h"
/**
 *_strcmp - function for string
 *@s1: first char
 *@s2: second char
 *Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
