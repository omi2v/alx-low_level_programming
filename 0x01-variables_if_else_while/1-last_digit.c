#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and print the number
 * if it is positive, negative or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
printf("%i Last digit of ", n);
printf("%i is ", n %10);
	if (n % 10 > 5)
	{
		printf("%i and is greater than 5\n", n);
	}
if (n % (10) == 0)
{
	printf("%i n", n);
	printf("%i n and is 0\n", n);
}
if (n % (10) < 6)
{
	printf("%i n", n);
	printf("%i n and is less than 6 and not 0\n", n);
}
	return (0);
}
