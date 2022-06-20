#include "main.h"
/*_memset - fill the memory
 * @s: the string
 * @b: the other string
 * @n: the other integer
 * Return: nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i < 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
