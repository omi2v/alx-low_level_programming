#include "main.h"
/**
 *cap_string - capitalizing the string
 *@s: the string
 *Return: always 0
 */
char *cap_string(char *s)
{
	int length = strlen (s)
		for (int i = 0; i < length; i++)
			s[i] =  toupper(s[i]);
}
