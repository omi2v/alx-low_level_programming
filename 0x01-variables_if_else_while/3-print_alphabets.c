#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and print the number
 * for loop
 * Return: 0
 */
int main(void)
{
        int ch,p;
        for (ch = 'a'; ch <= 'z'; ++ch)
        for (p = 'A'; p <= 'Z'; p++)
		putchar (ch);
	putchar (p);
        putchar ('\n');
	return (0);
}

