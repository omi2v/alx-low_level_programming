#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - function to free the node
 * @head: from the head
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
head = head->next;
free(head->str);
free(head);
head = temp;
}
}
