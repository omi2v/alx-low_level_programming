#include <stdio.h>
int main (void)
{
	int n=5;
	printf("The number, followed by %d\n");
	if (n>0){
		printf("if the number is greater than 0: is positive\n");
	}
	else if (n<0){
		printf("if the number is less than 0: is negative\n");
	}
	else{
		printf("if the number is 0: is zero")
	}
	return (0);
}
