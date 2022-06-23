#include "main.h"
/**
 *is_palindrome -  a function check a string
 *@s: the string
 *Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int middle = strlen(s) / 2;
	for (int i = 0; i < middle; i++;)
		if (s[i] != s[ - i -1])
			return (1);
		else 
			return (0);
}

