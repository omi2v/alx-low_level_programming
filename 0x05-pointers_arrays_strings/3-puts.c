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
putchar(str[s]);
}
_putchar('\n');
}
