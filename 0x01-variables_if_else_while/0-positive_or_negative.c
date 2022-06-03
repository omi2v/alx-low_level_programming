#include <stdio.h>
int main (void)
{
        int n = 5;
        
	srand(time(0));
	n = rand() - RAND_MAX / 2;

        if (n>0){
                printf("is positive\n");
        }
        else if (n<0){
                printf("is negative\n");
        }
        else{
                printf("is zero");
        }
        return (0);
}

