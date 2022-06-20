#include "main.h"
/**
 * _strspn - get the length of the prifix
 * @s : sting
 * @accept: the beyte include
 * Return: the num
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;
	for  (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
