#include "mainh"
/**
 * _puts_recursion - the function to print recursion
 * @s: the string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
}

