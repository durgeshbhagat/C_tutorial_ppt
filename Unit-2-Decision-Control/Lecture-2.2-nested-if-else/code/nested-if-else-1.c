/* Variation of Example 2.5  : A company insure its driver under following conditions:
 i) if the driver is married
 ii) if the driver is unmarried and above 35 years of age
*/
# include<stdio.h>

int main()
{
    char marital_status;
    int age;
    printf("Enter the age, gender and marital status:");
    scanf("%d %c", &age, &marital_status);
    
    if(marital_status =='M')
        printf("\n Driver is insured");
    else
    {
        if(age > 35)
            printf("\nDriver is insured");
    }
}