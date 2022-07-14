#include "lists.h"
#include <stdio.h>
/**
 * print_list - function declaration
 * @h: char
 * Return: smething
 */
size_t print_list(const list_t *h)
{
int count = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%i] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}

