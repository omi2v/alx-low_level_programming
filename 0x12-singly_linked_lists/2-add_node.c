#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
 * add_node - function to add  anod
 * @str: the string
 * Return: something
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int length = _strlen(str);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = length;
new->next = *head;
*head = new;
return (new);
}
