#include<stdio.h>

int main()
{
    int x;
    printf("Enter the value of x:");
    scanf("%d", &x);
    if(x)
    {
        printf(" \n %d  is nonzero", x);
    }
    printf("\nEnd of main function\n"); 
    return(0);
}