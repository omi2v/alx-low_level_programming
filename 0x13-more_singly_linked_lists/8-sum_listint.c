#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - declaration of fun
 * @head: the head
 * Return: 0
 */
int sum_listint(listint_t *head)
{
int s = 0;
if (head == NULL)
return (0);
while (head)
{
s = s + head->n;
head = head->next;
}
return (s);
}
