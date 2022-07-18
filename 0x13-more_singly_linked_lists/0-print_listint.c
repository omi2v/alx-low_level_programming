#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function description for list
 * @h: list value
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
int x = 0;
while (h)
{
printf("%i\n", h->n);
h = h->next;
x++;
}
return (x);
}
