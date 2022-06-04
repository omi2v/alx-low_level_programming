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
        
		putchar (ch);
        putchar ('\n');
	for (p = 'A'; p <= 'Z'; p++)
		putchar(p);
        return (0);
}

