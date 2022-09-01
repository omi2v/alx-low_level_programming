#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function to prnt the list
 * @h: the element
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
