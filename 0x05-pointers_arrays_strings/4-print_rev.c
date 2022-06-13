#include "main.h"
void print_rev(char *s)
{
	int len = strlen(s);
	int i = 0, j = 0;
	char temp[100];
	for  (i = 0; i < len; i++)
	{
		for (j = 0; i < len; j++, i++)
		{
			if (s[i] == ' ' || s[i] '.')
				break;
			temp[j] = s[i];
		}
	}
}
