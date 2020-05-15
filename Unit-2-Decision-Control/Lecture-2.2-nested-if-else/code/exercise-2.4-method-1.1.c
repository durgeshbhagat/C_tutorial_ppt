//  Chapter 2 - Exercise 2.4 Method 1
#include<stdio.h>
int main( )
{   int  per ;
    printf("Enter marks in %") ;
    scanf("%d", &per ) ;
    if( per >= 60 )
        printf("First division") ;
    else
    {
        if( per >= 50 )
            printf("Second division") ;
        else
        {
            if( per >= 40 )
                printf("Third division") ;
            else
                printf("Fail") ;
        }
    }
    return(0);
}