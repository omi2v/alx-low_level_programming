#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - funtion
 * @h: h
 * Return: nothing
 */
size_t dlistint_len(const dlistint_t *h)
	{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
