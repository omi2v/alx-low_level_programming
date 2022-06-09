#include "main.h"
/**
 * int_isupper - check if its upper or not 
 *@c: takes in character  
 * return : 1 if its A 0 if not 
 */
int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else {
		return (0);
	}
}
