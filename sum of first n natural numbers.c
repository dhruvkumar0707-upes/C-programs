#include<stdio.h>
int main()
{
    int a,sum;
    printf("Enter the n natural number:");
    scanf("%d",&a);
    sum=a*(a+1)/2;
    printf("Sum of first %d natural numbers is=%d",a,sum);
    return 0;
}