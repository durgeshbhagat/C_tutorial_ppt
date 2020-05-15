#include<stdio.h>

int main()
{
    int x;
    printf("Enter the value of x:");
    scanf("%d", &x);
    if(x%5 == 0)
        printf("\n %d is divisible by 5", x);
    else
        printf("\n %d is not divisible by 5", x);
    printf("\n End of main function");
    return(0);
}
