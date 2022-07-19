#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  description for pop
 * @head: the head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
listint_t *y;
int v;
if (*head == NULL)
return (0);
y = *head;
v = y->n;
*head = y->next;
free(y);
return (v);
}
