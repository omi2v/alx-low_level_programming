   #include <stdio.h>
int main (void)
{
        int n = 0;
        printf("enter the number:");
         scanf("%d", &n);
        if (n > 0)
        {
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
