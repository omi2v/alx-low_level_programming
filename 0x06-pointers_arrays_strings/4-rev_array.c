#include "main.h"
/**
 *reverse_array - main funcction
 *@a: integer a
 *@n: integer n
 *Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int um;
while (i < --n)
	{
		um = a[i];
		a[i++] = a[n];
		a[n] = um;
	}
}
