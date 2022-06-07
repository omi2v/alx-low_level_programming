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
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
putchar ('\n');
}

