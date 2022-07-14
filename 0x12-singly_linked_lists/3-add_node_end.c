#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: the string whose length to return
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * add_node_end -  function to add at the end
 * @str: the string
 * @head: the head
 * Return: something
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *end;
list_t *temp;
int leng = _strlen(str);
end = malloc(sizeof(list_t));
if (end == NULL)
return (NULL);
end->str = strdup(str);
end->len = leng;
end->next = NULL;
if (*head == NULL)
{
*head = end;
return (end);
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = end;
}
return (end);
}

