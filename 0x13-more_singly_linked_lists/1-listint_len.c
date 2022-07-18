#include "lists.h"
#include "stdio.h"
/**
 * listint_len - function declaration forlen
 * @h: the list
 * Return: nothing
 */
size_t listint_len(const listint_t *h)
{
int x = 0;
while (h)
{
x++;
h = h->next;
}
return (x);
}
