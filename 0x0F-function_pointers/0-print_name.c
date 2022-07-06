#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function name
 * @name: name of person
 * @f: the f
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
	return;
f(name);
}
