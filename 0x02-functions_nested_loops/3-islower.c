#include<stdio.h>
int _islower(int c)
{
int c;
printf ("Enter a character n");
scanf ("%c", &c);
if (c>='a' && c<='z')
{
return (1);
}
else
{
return (0);
}
}
