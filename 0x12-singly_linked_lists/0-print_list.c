#include "lists.h"
#include <stdio.h>
/**
 * print_list - function declaration
 * @h: the first list
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	while (h)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%i] %s\n", h->len, h->str);
	h = h->next;
	i++;
	return (i);
	}
}
