#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 * Description- a program to print alphabet 10times
 * Return: 0
 */

void print_alphabet_x10(void)
{
char alpha;
int x = 0;
while (x < 10)
{
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
x++;
}
}
