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
char ch;
for (ch = 'a'; ch <= 'z'; ++ch) 
{
_putchar (ch);
_putchar ('\n');
}
int main()
{
print_alphabet();
return(0);
}

