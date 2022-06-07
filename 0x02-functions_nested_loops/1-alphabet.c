#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and print the number
 * for loop
 * Return: 0
 */
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ++ch)
putchar (ch);
putchar ('\n');
}
int main(void)
{
print_alphabet();
return(0);
}

