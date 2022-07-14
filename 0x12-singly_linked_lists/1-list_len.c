#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - function declaratin
 * @h: h strng
 * Return: 0
 */
size_t list_len(const list_t *h)
{
int count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}


