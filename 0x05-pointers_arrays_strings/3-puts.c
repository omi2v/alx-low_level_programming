#include "main.h"
/**
 *_puts - fuction declaration
 *@str: character declaration
 *Return: nothing
 */
void _puts(char *str)
{
	for (int s = 0; str[s] != '\0'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
