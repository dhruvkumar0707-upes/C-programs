#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Ener the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if(a>b &&a>c)
    {
        printf ("the first number is greater=%d",a);
    }
    else if(b>a&&b>c)
    {
        printf("the second number is greater=%d",b);
    }
    else
    {
        printf("the third number is greater=%d",c);
    }
    return 0;
}