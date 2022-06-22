#include "main.h"
/**
 *_print_rev_recursion - function to reverse string
 *@s: the string
 *Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (s.size() == 0)
{
	return;
}
_print_rev_recursion(s.substr(1));
_putchar(s[0]);
}
