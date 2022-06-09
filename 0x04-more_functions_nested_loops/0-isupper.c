#include "main.h"
/**
*_isupper - return 1 if uppercase alphabet and 0 otherwise
*@c: takes in character
*Return: 1 if its uppercase  0 for lowercase
*/
int _isupper(int c)
{
if (c >= 'A' &&  c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
