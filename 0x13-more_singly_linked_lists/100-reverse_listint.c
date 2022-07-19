#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverse function
 * @head: the head
 * Return: something
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *v = NULL;
	listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = v;
v = *head;
*head = next;
}
*head = v;
return (*head);
}
