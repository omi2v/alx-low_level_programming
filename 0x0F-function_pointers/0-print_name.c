#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function name
 * @name: name of person
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
unsigned int i;
i = 0;
while (name[i])
{
	if (name[i] >= 'a' && name[i] <= 'z')
	{
		putchar(name[i] + 'A' - 'a');
	}
	else
	{
		putchar(name[i]);
	}
	i++;
	return 0;
}
}
