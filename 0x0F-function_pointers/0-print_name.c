#include "function_pointers.h"
/**
 * print_name - function name
 * @name: name of character
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*na)(char*, void*);
		na = &print_name;
}
