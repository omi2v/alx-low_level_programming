#include "main.h"
/**
 *_print_rev_recursion - function to reverse string
 *@s: the string
 *Return: nothing
 */
void _print_rev_recursion(char *s)
{
    static int i, len, temp;
    len = strlen(s); // use strlen() to get the length of str string


    if (i < len/2){
        // temp variable use to temporary hold the string
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
        i++;
        _print_rev_recursion(s); // recusively calls the revstr() function
    }
}
