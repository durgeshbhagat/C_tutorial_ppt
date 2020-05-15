// Exercise 2.4 Method-2
#include<stdio.h>
int main()
{
    int per;
    printf("Enter the percentage of marks \n");
    scanf("%d", &per);
    if(per >=60)
        printf("First division");
    if( (per >=50) && (per <60) )
        printf("Second Division");
    if( (per>=40) && (per <50) )
        printf("Third divison");
    if(per<40)
        printf("Fail");
    return(0);
}