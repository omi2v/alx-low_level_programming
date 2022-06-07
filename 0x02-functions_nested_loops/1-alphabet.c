#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 * Description: print alpahte from a to z
 * print_alphabet: declration of function
 * for loop
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ++ch)
{
putchar (ch);
}
putchar ('\n');
}
