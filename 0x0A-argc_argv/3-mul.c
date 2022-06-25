#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main -  the main functio
 *@argc: the count arg
 *@argv: the vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
int p, j, mul;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
p = atoi(argv[1]);
j = atoi(argv[2]);
mul = p *j;
printf("%d\n", mul);
return (0);
}
}
