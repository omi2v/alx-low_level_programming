#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * print_alphabet - This is a description
 * for loop
 * return 0
 */
void print_alphabet_x10(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ++ch)
{
putchar (ch);
}
putchar ('\n');
print_alphabet_x10();
print_alphabet_x10();
}

