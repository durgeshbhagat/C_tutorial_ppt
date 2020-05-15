#include<stdio.h>

int main()
{
    int x;
    printf("Enter the value of X:");
    scanf("%d", &x);
    if(x)
    {
        printf("\n %d is non-zero", x);
    }
    printf("End of main function");
    return(0);
}