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
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if ((ch == 'q') || (ch == 'e'))
{
continue;
}
putchar(ch);
}
putchar("\n");
return (0);
}
