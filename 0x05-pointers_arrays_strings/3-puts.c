#include "main.h"
/**
 *_puts - description for function
 *@str: takes character
 *Return: nothing
 */
void _puts(char *str)
{
	int s;
for (s = 0; str[s] != '\0'; s++)
{
_puts(str[s]);
}
_puts('\n');
}
