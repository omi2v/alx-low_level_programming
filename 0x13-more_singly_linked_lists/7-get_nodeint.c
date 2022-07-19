#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function declaration
 * @head: the head
 * @index: the cout
 * Return: something
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int e = 0;
while (head)
{
if (index == e)
return (head);
head = head->next;
e++;
}
return (NULL);
}
