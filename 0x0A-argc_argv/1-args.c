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
	if (argv[0])
		printf("%d\n", argc - 1);
return (0);
}
