#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function to free 2
 * @head: from the head
 * Return: something
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
{
while (head == NULL)
{
temp = *head;
free(temp);
*head = temp->next;
}
}
}
