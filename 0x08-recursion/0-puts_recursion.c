#include "main.h"
/**
 * _puts_recursion - the function to print recursion
 * @s: the string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	putchar(*s);
}

