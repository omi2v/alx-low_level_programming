#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - declaration to add to the ende
 * @head: the head
 * @n: the integer
 * Return: something
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *x;
listint_t *temp;
x = malloc(sizeof(listint_t));
if (x == NULL)
return (NULL);
x->n = n;
x->next = NULL;
if (*head == NULL)
{
*head = x;
return (x);
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = x;
}
return (x);
}
