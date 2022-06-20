#include "main.h"
/**
 * _strstr - function for to do
 * @haystack: th efirst char
 * @needle: the two need
 * Return: nothing
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;
	while (needle[s] != '\0';
			s++;
			while (*haystack)
			{
			for (i = 0; needle[i]; i++)
			{
			if (haystack[i] != needle[i])
			break;
			}
			if (i != s)
			haystack++;
			else
			return (haystack);
			}
return (NULL);
}

