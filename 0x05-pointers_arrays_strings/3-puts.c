#include "main.h"
/**
 *_puts - description for function
 *@str: takes character
 *Return: nothing
 */
void _puts(char *str)
{
	int s = 0;
	while(str[s] != '\0')
	{
	putchar(str[s]);
	s++;
}
_putchar('\n');
}
