#include "main.h"
void print_rev(char *s)
{
if (*s != '\0')
{
	print_rev(s + 1);
		_putchar("%c", *s);
}
}
