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
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
if (n % 10 == 0)
{
	printf("last digit of %d is %d and is 0\n", n, n % 10);
}
if (n % 10 < 6)
{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, n %10);
}
	return (0);
}
