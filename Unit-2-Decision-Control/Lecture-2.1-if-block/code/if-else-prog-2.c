#include<stdio.h>
// Calculation of gross salary Example 2.3
int main()
{
    float bs, gs, da, hra;
    
    printf("Enter the basic salary: ");
    scanf("%f", &bs);
    
    if(bs<1500)
    {
        hrs = bs * 10 / 100 ;
        da = bs*90 /100;
    }
    else
    {
        hra = 500;
        da = bs * 98/ 100;
    }
    gs = bs + hra + da ;
    printf("\n gross salary = Rs. %f", gs);
}