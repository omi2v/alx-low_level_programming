#include "main.h"
/**
*_isdigit - return 1 if c is a digit 
*@c: takes digit  
*Return: 1 for digit 0 for not 
*/
int _isdigit(int c)
{
if (isdigit(c) == 0) || (isdigit(c) <= 9)
{
return (1);
}
else
{
return (0);
}
