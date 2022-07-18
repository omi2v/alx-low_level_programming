#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node at the beginning
 * @head: the head of cons
 * @n: number of n
 * Return: something
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *x;
x = malloc(sizeof(listint_t));
if (x == NULL)
return (NULL);
x->n = n;
x->next = *head;
*head = x;
return (x);
}
