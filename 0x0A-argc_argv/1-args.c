#include "main.h"
#include <stdio.h>
/**
 *main - the function
 *@argc: the count argument
 *@argv: the vector srgumnent
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i;
(void)argv;
for (i = 0; i < argc; i++)
{}
printf("argv[%d]= %s\n", i, argv[i]);

return (0);
}
