#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -- declaration to free list
 * @head: from the head
 * Return: something
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
